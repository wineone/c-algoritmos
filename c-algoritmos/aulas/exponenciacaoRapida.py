# coding: utf-8

def potencia(num, power, mod):
	if power == 0:	return 1
	elif (power % 2 == 0):
		return ((potencia(num, power / 2, mod) % mod) ** 2) % mod
	else:
		return ((potencia(num, power - 1, mod) % mod) * num) % mod 

print "Base: ",
entry = int(raw_input())
print "Expoente: ",
power = int(raw_input())
print "Mod: ",
mod = int(raw_input())

print "saída mod %d: %d" % (mod, potencia(entry, power, mod))
