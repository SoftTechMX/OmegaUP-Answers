#include <iostream>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	char c;

	string word;
	cin >> word;

	int aux;
	int m, i, g, u, e, l;
	int numeros[6];
	m = i = g = u = e = l = 0;

	for (size_t j = 0; j < word.size(); ++j)
	{
		c = word[j];

		switch (c)
		{
			case 'm':
				++m;
				break;
			case 'i':
				++i;
				break;
			case 'g':
				++g;
				break;
			case 'u':
				++u;
				break;
			case 'e':
				++e;
				break;
			case 'l':
				++l;
				break;
		}
	}

	//
	numeros[0] = m;
	numeros[1] = i;
	numeros[2] = g;
	numeros[3] = u;
	numeros[4] = e;
	numeros[5] = l;

	while (true)
	{
		// ORDENAR
		for (int x = 1; x < 6; ++x)
		{
			for (int y = 0; y < 6 - x; ++y)
			{
				if (numeros[y] > numeros[y + 1])
				{
					aux = numeros[y + 1];
					numeros[y + 1] = numeros[y];
					numeros[y] = aux;
				}
			}
		}
		// SI TODOS SON IGUALES
		if (numeros[0] == numeros[1] && numeros[1] == numeros[2] && numeros[2] == numeros[3] && numeros[3] == numeros[4] && numeros[4] == numeros[5])
		{
			// FIN
			cout << numeros[0];
			return 0;
		}
		else
		{
			// REESTAR 1 AL ULTIMO
			numeros[5] -= 1;
		}	
	}
}