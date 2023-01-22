#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    struct punto{
        double x;
        double y;
    };

    struct punto *p = new punto[4];
    double longitud, menor=100000;

    for(int i=0; i<4; ++i){
        cin >> p[i].x;
        cin >> p[i].y;
    }

    // IMPRIMIR
    /*
    for(int i=0; i<4; ++i){
        cout << "(" << p[i].x <<","<< p[i].y <<")"<<endl;
    }
	*/

    // COMPARACION
    for(int i=0; i < 4; ++i){
        if( i+1 == 4 ){
            // Comparamos el ultimo con el primero
            double x = p[0].x - p[i].x;
            double y = p[0].y - p[i].y;
            longitud = sqrt( (x*x)+(y*y) );
        }else{
            // Comparamos el actual con el siguiente
            double x = p[i+1].x - p[i].x;
            double y = p[i+1].y - p[i].y;
            longitud = sqrt( (x*x)+(y*y) );
        }
        if( longitud < menor)
        	menor = longitud;
    }
    cout << setprecision(7) << menor;
    return 0;
}