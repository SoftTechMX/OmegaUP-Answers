#include <iostream>

using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  // TODO: fixme.
  char c;
  int n;

  cin >> c >> n;

  switch(c)
  {
    // NEGRAS
    case 'a':
    case 'c':
    case 'e':
    case 'g':
      if( n%2 == 0)
      {
        cout << "BLANCO";
      }
      else
      {
        cout << "NEGRO";
      }
    break;
    // BLANCAS
    case 'b':
    case 'd':
    case 'f':
    case 'h':
      if( n%2 == 0)
      {
        cout << "NEGRO";
      }
      else
      {
        cout << "BLANCO";
      }
    break;
  }
  return 0;
}