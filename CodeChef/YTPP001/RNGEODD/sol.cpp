#include <iostream>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  if(l % 2 == 0)
    l += 1;
  if(r % 2 == 0)
    r -= 1;
  for(int i = l; i <= r; i += 2)
    cout << i << " ";
  return 0;
}

