cont_resto = 0
numero = 0
continuar = True
cont = 0
numero_cont = int(input("Digite a posição do numero: "))
while continuar:
    for numero in range(1, 20000):
        cont_resto = 1
        for divisor in range(1, numero):
            if numero % divisor == 0:
                cont_resto += 1
        if cont_resto == 2:
            cont += 1
        if cont == numero_cont:
            continuar = False
            break
print(f"O {numero_cont} numero primo na ordem crescente é {numero}")
