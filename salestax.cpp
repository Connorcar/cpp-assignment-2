#include <iostream>
using namespace std;

void addTax(double taxRate, double& cost) {
  cost = cost * (1 + taxRate);
}

int main() {
  double cost;
  double taxRate;

  cout << "Enter cost of item: " << endl;
  cin >> cost;
  cout << "Enter tax rate: " << endl;
  cin >> taxRate;

  addTax(taxRate, cost);
  cout << "The cost plus tax is $" << cost << endl;

  return 0;
}
