#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
		typedef unsigned int numero;
		numero cantidadDeBotellas,i, precio;
    map<numero, numero> tablaPrecios;
    map<numero, numero>::iterator it;

    cin >> cantidadDeBotellas;
    for(i=0; i<cantidadDeBotellas; ++i){
    		cin >> precio;
        tablaPrecios.insert( pair<numero, numero>(precio, i) );
    }

    it = tablaPrecios.begin();
    cout << it->first;
    return 0;
}