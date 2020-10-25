#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  
  int i;
  cin >> i;
  while(i != 0){
    
    int a;
    cin >> a;
    if(a % 2 == 0){
      int b[a] = {0};
      for(int j = 0;j < a; j +=2){
        int x = j + 1;
        b[j] = x + 1;
        b[x] = x;
      }
      
      for(int j = 0;j < a; j++){
        cout << b[j] << " ";
      }
    }
    else{
      int b[a] = {0};
      for(int j = 0;j < a;j += 2){
        int x = j + 1;
        if(x == a - 2){
          b[j] = x + 1;
          b[j + 1] = x + 2;
          b[j + 2] = x;
          break;
        }
        b[j] = x + 1;
        b[x] = x;
      }
      
      for(int j = 0;j < a; j++){
        cout << b[j] << " ";
      }
    }
    
    --i;
  }
  
  return 0;
}
