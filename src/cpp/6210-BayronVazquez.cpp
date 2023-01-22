#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double a,b,h;
    double area = 0;
    cin >> a >> b >> h;
    area = (((a+b)/2)*h);
    //if( area % 1 == 0)
        //cout << setprecision(0) << fixed << area;
    //else
        cout << setprecision(1) << fixed << area;
    return 0;
}
