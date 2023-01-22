#include <iostream>

using namespace std;

int main()
{
	string s1,s2,s3, linea;
	size_t inicio = 0, fin;

    cin >> linea;

    fin = linea.find("?");					// BUSCAR
    s1 = linea.substr( inicio, fin );		// SEPARAR
    inicio = fin;							// ACTUALIZAR


    fin = linea.find(":");
    s2 = linea.substr( inicio+1, fin-inicio-1 );
    inicio = fin;


    //fin = linea.find(":");
    s3 = linea.substr( inicio+1 );


    cout << "if("<<s1<<")\n";
    cout <<"     "<<s2<<";\n";
    cout <<"else\n";
    cout <<"     " << s3<<";";
    return 0;
}