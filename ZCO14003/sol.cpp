#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  
    int a;
    cin >> a;
    long long int x[a];
    
    for(int i = 0;i < a;++i){
      cin >> x[i];
    }
    
    sort(x, x + a);
    
    long long int y[a];
    for(int i = 0;i < a;++i){
      y[i] = x[i] * (a - i);
    }
    
    sort(y, y + a);
    
    cout << y[a - 1] << endl;
  
  return 0;
}
