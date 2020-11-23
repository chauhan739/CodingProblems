#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  int a, b, c, total = 0;
  cin >> a >> b >> c;
  for(int i = 0;i < a;++i){
    int arr[c], sum = 0;
    for(int j = 0;j < c;++j){
      cin >> arr[j];
      sum += arr[j];
    }
    int x;
    cin >> x;
    if(sum >= b && x <= 10){
      total += 1;
    }
  }
  cout << total << endl;
  
  return 0;
}
