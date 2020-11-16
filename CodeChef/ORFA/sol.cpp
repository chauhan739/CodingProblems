#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int checkOrder(int a){
  if(a < 0){
    return 0;
  }
  else
    return a;
}

int main(){
  
  int classes, order;
  cin >> classes >> order;
  
  int arr[classes];
  for(int i = 0;i < classes;++i){
    cin >> arr[i];
  }
  
  int total = 0;
  for(int i = 0;i < classes;++i){
    total += arr[i];
  }
  
  int a, b, c;
  if(total > order){
    cout << "Thank you, your order for " << order << " oranges are accepted\n";
    for(int i = 0;i < classes;++i){
      a = arr[i];
      if(a < order){
        cout << a << " " << a << " " << 0 << endl;
        order = order - a;
        order = checkOrder(order);
      }
      else if(a > order){
        cout << a << " " << order << " " << a - order << endl;
        order = order - a;
        order = checkOrder(order);
      }
      else{
        cout << a << " " << 0 << " " << a << endl;
      }
    }
  }
  else{
    cout << "Sorry, we can only supply " << total - 1 << " oranges\n";
    for(int i = 0; i < classes;++i){
      a = arr[i];
      if(i != classes - 1){
        cout << a << " " << a << " " << 0 << endl;
      }
      else{
        cout << a << " " << a - 1 << " " << 1 << endl;
      }
    }
  }
  
  return 0;
}
