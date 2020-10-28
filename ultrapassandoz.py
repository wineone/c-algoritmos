x = int(input())
z = int(input())
while z < x or z==x:
    z = int(input())
soma = cont = 0
n = x
while True:
    if soma < z:
        soma+= n
        cont+=1
        n+=1
    else:
        break
print(cont)
