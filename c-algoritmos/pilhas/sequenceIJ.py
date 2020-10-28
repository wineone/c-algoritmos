i=0
j=1
cont = 0
pf = 0
v =1
oi=0.2
while True:
    print('I={} J={}'.format(i,j))
    j+=v
    cont+=1

    if cont==3:
        pf += 0.2
        j=1+pf
        i+=oi
        cont = 0
    if type(i) ==float:
        i = round(i,1)
    if i ==1.0:
        i=int(1)
        j= int(j)
    if i ==2:
        i = int(2)
        j= int(j)
    if i==1.6:
        j = round(j,2)
    if i>2:
        break
