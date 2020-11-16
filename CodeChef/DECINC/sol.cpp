#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  
  int a;
  cin >> a;
  if(a % 4 == 0){
    a += 1;
  }
  else{
    a -= 1;
  }
  cout << a;
  
  return 0;
}
