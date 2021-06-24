#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = n % 3;
  int b = n / 3;
  if(a != 0)
    cout << "-1";
  else{
    if(b % 2 == 1)
      cout << "1";
    else if(b % 2 == 0)
      cout << "0";
  }
  return 0;
}
