#include <iostream>
using namespace std;
int main() {

  int i;
  cout << "数値を入力してください";
  cout << " i = ";
  cin >> i;
  cout << "\n入力された数値は " << i <<"です\n";

  float f;
  cout << "数値を入力してください f = ";
  cin >> f;
  cout << "\n入力された数値は " << f <<"です\n";

  if (i == 0) {
    cout << "iは0です";
  }
  else if (i == 1) {
    cout << "iは1です";
  }
  else {
    cout << "iは「0」または「1」以外です";
  }
  return 0;
}
