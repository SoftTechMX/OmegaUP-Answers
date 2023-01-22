#include <iostream>

using namespace std;

int main() {
    int totalCachorros, perrosDePancho, hijos, miembrosDeFamilia, perrosParaRepartir, perrosSobrantes;

    cin >> totalCachorros >> perrosDePancho >> hijos;
    miembrosDeFamilia = hijos + 1; // sumamos la esposa

    perrosParaRepartir = totalCachorros - perrosDePancho;
    perrosSobrantes = perrosParaRepartir % miembrosDeFamilia;

    if( perrosSobrantes == 0)
    {
        // si el residuo es 0 significa que se pueden repartir los cachorros de
        // manera equitativa por lo tanto pancho se queda con
        cout << (totalCachorros - perrosParaRepartir);
    }
    else
    {
        // si no se pueden repartir don pancho se queda con los perros que sobran
         cout << (totalCachorros - perrosParaRepartir + perrosSobrantes);
    }

  return 0;
}
