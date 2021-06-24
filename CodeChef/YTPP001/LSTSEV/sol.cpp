#include <iostream>
#include<string>
using namespace std;

int main() {
  string str;
  cin >> str;
  str.shrink_to_fit();
  int a = str.size();
  if(str[a - 2] == '7')
    cout << "1";
  else
    cout << "0";
  return 0;
}
