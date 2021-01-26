#include <iostream>
using namespace std;

void zeroBoth(int& x, int& y) {
  x = 0;
  y = 0;
}

int main() {
  int x ;
  int y ;

  cout << "Enter an x value: ";
  cin >> x;
  cout << "Enter a y value: ";
  cin >> y;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  cout << ' ' << endl;
  zeroBoth(x, y);

  cout << "Zero'd both values." << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;



  return 0;
}
