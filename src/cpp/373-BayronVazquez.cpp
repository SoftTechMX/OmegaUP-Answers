#include <iostream>

using namespace std;

int main()
{
    int n,k,tmp,contador=0;
    cin >> n >> k;
    for(int i=0; i<n;i++){
        cin >>tmp;
        if( tmp == k)
            contador++;
    }
    cout << contador;
    return 0;
}