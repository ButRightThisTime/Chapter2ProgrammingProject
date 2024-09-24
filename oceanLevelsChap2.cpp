#include <iostream>
using namespace std;
const double risePerYear = 1.5;
int main() { 
  int years;
  cout << "How many years do you want to see the ocean level rise? ";
  cin >> years;
  cout << "It will rise " <<years*risePerYear << " millimeters in " << years << " years." << endl;
}