#include <iostream>
using namespace std;

void inputFunction(double &feet, double &inches) {
  cout << "Enter feet: " << endl;
  cin >> feet;

  cout << "Enter inches: " << endl;
  cin >> inches;
}

void imperialToMetric (double &totalMeters, double feet, double inches) {
  totalMeters = (feet * 0.3048) + (inches * 0.0254);
}

void outputFunction(double totalMeters) {
  cout << totalMeters << " meters" << endl;
}


int main() {
  int exit = 1;
  double feet;
  double inches;
  double totalMeters;
  double meters;
  double cm;

  while (exit != 0) {
    inputFunction(feet, inches);
    imperialToMetric(totalMeters, feet, inches);
    outputFunction(totalMeters);
    cout << "Enter 1 to continue, enter 0 to exit. ";
    cin >> exit;
  }


  return 0;
}
