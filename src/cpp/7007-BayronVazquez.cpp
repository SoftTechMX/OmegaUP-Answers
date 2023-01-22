/*
 ___ _____ __  __       ____                 _
|_ _|_   _|  \/  |     |  _ \  _____   _____| | ___  _ __   ___ _ __ ___
 | |  | | | |\/| |_____| | | |/ _ \ \ / / _ \ |/ _ \| '_ \ / _ \ '__/ __|
 | |  | | | |  | |_____| |_| |  __/\ V /  __/ | (_) | |_) |  __/ |  \__ \
|___| |_| |_|  |_|     |____/ \___| \_/ \___|_|\___/| .__/ \___|_|  |___/
                                                    |_|
            https://www.facebook.com/ITMDevelopers
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double a1,b1,c1,a2,b2,c2, delta, deltax, deltay;

  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

  delta = (a1*b2)-(a2*b1);
  deltax = (c1*b2)-(c2*b1);
  deltay = (a1*c2)-(a2*c1);

    cout << fixed << setprecision(6)
         << (deltax / delta) << " " << (deltay / delta);
  return 0;
}
