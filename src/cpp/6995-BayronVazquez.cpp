#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x,y,z;
    cin >> x >> y >> z;
    cout << setprecision(6) << fixed;
    cout <<  ( x + x * (y+(z*z))) / ( (x+3.1416)*(y+3.1416));
    return 0;
}
