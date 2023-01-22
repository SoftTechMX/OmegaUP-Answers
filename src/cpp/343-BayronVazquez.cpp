#include <iostream>
#include <map>
using namespace std;

typedef unsigned long long int ull;
map<ull,ull> M;

ull f(ull x){
    if (x == 1) return 1;
    if (x % 2) return f(x/2);
    if (M.find(x) != M.end()) return M[x];
    return M[x] = f(x/2) + f((x/2)-1);
}

int main(){
    M[0] = 1;
    M[1] = 1;
    ull x;
    cin >> x;
    cout << f(x);
}