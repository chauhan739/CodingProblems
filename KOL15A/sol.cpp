#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  
  int a, b = 0;
  cin >> a;
  
   while (a){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0;i < s.length(); ++i){
      
      if(s[i] >= '1' && s[i] <= '9'){
        switch(s[i]){
          case '1' :
            sum += 1;
            break;
          case '2' :
            sum += 2;
            break;
          case '3' :
            sum += 3;
            break;
          case '4' :
            sum += 4;
            break;
          case '5' :
            sum += 5;
            break;
          case '6' :
            sum += 6;
            break;
          case '7' :
            sum += 7;
            break;
          case '8' :
            sum += 8;
            break;
          case '9' :
            sum += 9;
            break;
          default :
            break;
            
        }
      }
      
    }
    cout << sum << endl;
    a--;
  }
  
  return 0;
}
