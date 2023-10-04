#!/usr/bin/python3

def _main() -> None:
	# TODO: fixme.
	palabra = input()
	frase = input()
	palabras = frase.split()
	
	cont = 0
	for word in palabras:
		word = word.strip('.,?!()[]{}"\'')
		if palabra.lower() == word:
			cont += 1
	
	if(cont > 1):
		print(f"{palabra} se repite {cont} veces.")
	else:
		print(f"{palabra} se repite {cont} vez.")

if __name__ == '__main__':
  _main()