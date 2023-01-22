#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string numero;
  cin >> numero;
  reverse(numero.begin(), numero.end() );
  cout << numero;

  return 0;
}