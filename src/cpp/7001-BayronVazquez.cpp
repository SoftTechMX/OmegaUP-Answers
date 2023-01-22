#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float r;
    cin >> r;

    cout << setprecision(6) << fixed;
    cout<< r <<" "
        << r+5 <<" "
        << (r+5)*(r+5)<<" "
        << ((r+5)*(r+5)) / (r/3)<<" "
        << (((r+5)*(r+5)) / (r/3))*(((r+5)*(r+5)) / (r/3))*(((r+5)*(r+5)) / (r/3));
    return 0;
}
