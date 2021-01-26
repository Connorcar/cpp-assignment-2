#include <iostream>
using namespace std;

int main() {
  int arraySize = 10;
  int myArray[arraySize];
  int newInt;

  for (int i = 0; i < arraySize; ++i) {
    cout << "Enter an integer: " << endl;
    cin >> newInt;

    myArray[i] = newInt;
  }

  cout << ' ' << endl;

  for (int i = 0; i < arraySize; ++i) {
    cout << myArray[i] << endl;
  }

  return 0;
}
