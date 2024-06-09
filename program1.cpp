#include <iostream>
#include <string>

using namespace std;

int main() {

  string color;

  cout << "Enter your fav. color : " ;

  getline(cin, color);

  cout << "Hey " << color << " is my fav. too" << endl;
  return 0;
}