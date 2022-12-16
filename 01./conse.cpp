#include "iostream"

using namespace std;
int main() {

  int curr_val = 0, value = 0;
  if (cin >> curr_val) {
    int cnt = 1;
    while (cin >> value) {
      if (value == curr_val) {
        ++cnt;
      } else {
        cout << curr_val << " occurs " << cnt << " times " << endl;
        curr_val = value;
        cnt = 1;
      }
    }
    cout << curr_val << " occurs " << cnt << " times " << endl;
  }
  return 0;
}
