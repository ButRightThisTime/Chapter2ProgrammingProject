#include <iostream>
using namespace std;
const double totalSurveyed = 16500;
const double onePlusPercent = 0.15;
const double citrusPercent = 0.58;
int main() { 
cout << "number who purchased one or more energy drinks per week: " << totalSurveyed * onePlusPercent << endl;
cout << "number who prefer citrus flavored energy drinks: " << totalSurveyed * citrusPercent *onePlusPercent << endl;
}
