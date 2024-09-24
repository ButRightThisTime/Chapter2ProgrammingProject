#include <iostream>
using namespace std;
const double mpgTown = 23.5;
const double mpgHighway = 28.9;
const double tankSize = 20;
int main() { 
  cout << "max distance in town: " << mpgTown * tankSize << "mi "<<endl ;
  cout << "max distance on highway: " << mpgHighway * tankSize<< "mi" << endl;
}
