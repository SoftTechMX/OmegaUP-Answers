#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  vector<int> numeros;
  int n, tmp;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> tmp;
    numeros.push_back( tmp );
  }

  sort( numeros.begin(), numeros.end() );

  auto primero = numeros.begin();

  int actual = *primero;

  for(auto it = numeros.begin(); it != numeros.end(); it++)
  {

    if( actual++ != *it )
    {
        cout << "NO";
        return 0;
    }
  }
  cout << "SI";
  return 0;
}