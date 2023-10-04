import sys

while True:
    linea = sys.stdin.readline()
    if not linea:
        break  # Sal del bucle cuando se llega al final del archivo (EOF)
    # Procesa la línea, por ejemplo, imprímela
    print("Hola " + linea.strip())
