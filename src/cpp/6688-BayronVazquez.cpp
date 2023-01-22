#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
		typedef unsigned int numero;
		numero cantidadDeProductos,i;
		float precio, total = 0;
		string descripcion;

    multimap<float, string> tablaPrecios;
    multimap<float, string>::reverse_iterator it;

    cin >> cantidadDeProductos;
    for(i=0; i<cantidadDeProductos; ++i){
				cin >> descripcion;
    		cin >> precio;
        tablaPrecios.insert( pair<float, string>(precio, descripcion) );
    }

    i = 1;
    for( it = tablaPrecios.rbegin(); it != tablaPrecios.rend(); ++it){
    		cout << i++ <<" | "<< it->second << " | " << it->first << endl;
    		total += it->first;
    }
    cout << endl << total;
    return 0;
}