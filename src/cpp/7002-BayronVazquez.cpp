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
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double x,y,z;
  cin >> x;

  y = (x+5) / ( 2*(x+1));
  z = ((pow(y,2))+(x*(x-(2*y))))/(x*y);
  cout << fixed << setprecision(6) << z;
  return 0;
}
