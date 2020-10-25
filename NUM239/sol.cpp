#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  
  int n;
  cin >> n;
  while(n != 0){
    
    int x, y, count = 0;
    cin >> x >> y;
    for(int i = x;i <= y;++i){
      int a = i % 10;
      if(a == 2 || a == 3 || a == 9){
        count += 1;
      }
    }
    cout << count << endl;
    --n;
  }
  
  return 0;
}
