vendedores = int(input("Digite a quantidade de vendedores: "))
cont = 0
salarios = [0,0,0,0,0,0,0,0,0]
while cont<vendedores:
        venda = float(input("Digite a venda do {}* vendedor: ".format(cont+1)))
        salario = 200 + (venda*0.09)
        print(salario)
        cont+=1
        if 200<=salario<=299:
                salarios[0]+=1
        elif 300<=salario<=399:
                salarios[1]+=1
        elif 400<=salario<=499:
                salarios[2]+=1
        elif 500<=salario<=599:
                salarios[3]+=1
        elif 600<=salario<=699:
                salarios[4]+=1
        elif 700<=salario<=799:
print(salarios)
