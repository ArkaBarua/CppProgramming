#include "iostream"

using namespace std;

int mai() {

  int mark = 0;
  cout << "Please Enter your marks : ";
  cin >> mark;
  if (mark >= 80) {
    cout << "A+\n";
  } else if (mark >= 70) {
    cout << "A\n";
  } else if (mark >= 60) {
    cout << "A-\n";
  } else if (mark >= 50) {
    cout << "B\n";
  } else if (mark >= 40) {
    cout << "C\n";
  } else if (mark >= 33) {
    cout << "D\n";
  } else {
    cout << "F\n";
  }

  return 0;
}
