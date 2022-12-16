#include "iostream"
using namespace std;

int main() {
  int count = 1, val, sum = 0;

  cout << "Enter a number to make the sum : ";
  cin >> val;
  while (count <= val) {
    cout << "the value of count is " << count << endl;
    sum += count;
    count++;
  }
  cout << "The sum of 1 to " << val << " is " << sum << endl;
  return 0;
}
