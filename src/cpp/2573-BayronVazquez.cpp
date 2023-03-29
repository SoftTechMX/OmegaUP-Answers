#include <iostream>

using namespace std;

long FibonnaciNthNumber( size_t hops )
{
    long tmp;                  // Temporal number, for arithmetic purpose

    // Los primeros dos numeros de la sucesion de fibonacci.
    long n1 = 1, n2 = 1;

    // Si es cero retornamos la secuencia vacia
    if( hops == 0)
    {
        return 0;
    }

    if( hops == 1 )
    {
        return 1;
    }

    if( hops == 2 )
    {
        return 1;
    }

    // si es mayor que dos entra en el value y calcula los demas numeros con los primeros dos, si no
    // pasa el bucle ignorandolo y retrona los dos primeros elementos
    for( size_t i = 2; i < hops; i++)
    {
        // actualizamos las variables para la siguiente itineracion
        tmp = n1;
        n1 = n2;
        n2 = tmp + n2;
    }

    return n2;
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  // TODO: fixme.
  int i;
  cin >> i;
  cout << FibonnaciNthNumber( i+1);
  return 0;
}