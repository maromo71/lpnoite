import sys
import os
import ctypes
from PyQt6.QtWidgets import (QApplication, QWidget, QVBoxLayout, QHBoxLayout, 
                             QLineEdit, QPushButton, QLabel, QMessageBox)
from PyQt6.QtGui import QFont

# ---------------------------------------------------------
# 1. CARREGANDO A DLL EM C
# ---------------------------------------------------------
# Substitua pelo nome exato do arquivo gerado pelo CLion
NOME_DLL = "libCalc.dll"  # ou "calculadora.dll" no Windows

# Pega o caminho absoluto do diretório atual
caminho_dll = os.path.join(os.path.dirname(os.path.abspath(__file__)), NOME_DLL)

try:
    calc_dll = ctypes.CDLL(caminho_dll)
    
    # Definindo os tipos de argumentos (argtypes) e retornos (restype) 
    # para garantir que o Python envie inteiros (C int)
    calc_dll.somar.argtypes = [ctypes.c_int, ctypes.c_int]
    calc_dll.somar.restype = ctypes.c_int

    calc_dll.subtrair.argtypes = [ctypes.c_int, ctypes.c_int]
    calc_dll.subtrair.restype = ctypes.c_int

    calc_dll.multiplicar.argtypes = [ctypes.c_int, ctypes.c_int]
    calc_dll.multiplicar.restype = ctypes.c_int

    calc_dll.dividir.argtypes = [ctypes.c_int, ctypes.c_int]
    calc_dll.dividir.restype = ctypes.c_int

except OSError:
    print(f"ERRO: Não foi possível carregar a DLL '{NOME_DLL}'.")
    print("Verifique se o arquivo está na mesma pasta do script main.py.")
    sys.exit(1)


# ---------------------------------------------------------
# 2. INTERFACE GRÁFICA COM PYQT6
# ---------------------------------------------------------
class CalculadoraGUI(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setWindowTitle('Calculadora C + Python')
        self.setFixedSize(300, 200)

        # Layout Principal
        layout_principal = QVBoxLayout()

        # Inputs
        layout_inputs = QHBoxLayout()
        self.input_a = QLineEdit()
        self.input_a.setPlaceholderText("Valor A")
        self.input_b = QLineEdit()
        self.input_b.setPlaceholderText("Valor B")
        layout_inputs.addWidget(self.input_a)
        layout_inputs.addWidget(self.input_b)

        # Botões
        layout_botoes = QHBoxLayout()
        btn_somar = QPushButton('+')
        btn_subtrair = QPushButton('-')
        btn_multiplicar = QPushButton('*')
        btn_dividir = QPushButton('/')

        layout_botoes.addWidget(btn_somar)
        layout_botoes.addWidget(btn_subtrair)
        layout_botoes.addWidget(btn_multiplicar)
        layout_botoes.addWidget(btn_dividir)

        # Resultado
        self.lbl_resultado = QLabel('Resultado: ---')
        fonte = QFont("Arial", 14, QFont.Weight.Bold)
        self.lbl_resultado.setFont(fonte)

        # Adicionando tudo ao layout principal
        layout_principal.addLayout(layout_inputs)
        layout_principal.addLayout(layout_botoes)
        layout_principal.addSpacing(20)
        layout_principal.addWidget(self.lbl_resultado)

        self.setLayout(layout_principal)

        # Conectando os botões às funções
        btn_somar.clicked.connect(lambda: self.calcular('somar'))
        btn_subtrair.clicked.connect(lambda: self.calcular('subtrair'))
        btn_multiplicar.clicked.connect(lambda: self.calcular('multiplicar'))
        btn_dividir.clicked.connect(lambda: self.calcular('dividir'))

    def calcular(self, operacao):
        try:
            # Pegando os valores digitados e convertendo para int
            a = int(self.input_a.text())
            b = int(self.input_b.text())
            
            # Executando a função correspondente na DLL
            if operacao == 'somar':
                resultado = calc_dll.somar(a, b)
            elif operacao == 'subtrair':
                resultado = calc_dll.subtrair(a, b)
            elif operacao == 'multiplicar':
                resultado = calc_dll.multiplicar(a, b)
            elif operacao == 'dividir':
                # PROTEÇÃO CONTRA O EXIT(1) DO C
                if b == 0:
                    QMessageBox.warning(self, "Erro", "Divisão por ZERO!")
                    return
                resultado = calc_dll.dividir(a, b)

            # Atualizando a tela
            self.lbl_resultado.setText(f'Resultado: {resultado}')

        except ValueError:
            QMessageBox.critical(self, "Erro", "Por favor, digite apenas números inteiros válidos.")

if __name__ == '__main__':
    app = QApplication(sys.exit(1) if sys.flags.interactive else sys.argv)
    ex = CalculadoraGUI()
    ex.show()
    sys.exit(app.exec())