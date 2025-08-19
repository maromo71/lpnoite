
def main():
    soma = 0
    while True:
        numero = int(input("Digite um número: "))
        if numero < 0 or numero > 20:
            print("Número inválido. Tente novamente.")
        else:
            soma += numero
        if numero == 0:
            break
    print(f"A soma dos números digitados é: {soma}")

if __name__ == "__main__":
    main()

