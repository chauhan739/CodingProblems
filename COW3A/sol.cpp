#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  
  int t;
  cin >> t;
  while(t != 0){
    
    int fruit[4];
    
    for(int i = 0;i < 4;i++){
      cin >> fruit[i];
    }
    
    cout << fruit[3] - fruit[1] << " " << fruit[3] - fruit[2] << " " << fruit[3] - fruit[0] << endl;
    t--;
  }
  
  return 0;
}
