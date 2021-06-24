#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int size, to_find;
  cin >> size >> to_find;
  int arr[size];
  for(int i = 0; i < size; i++)
    cin >> arr[i];
  int* p = find(arr, arr + size, to_find);
  if(p != arr + size)
    cout << "1";
  else
    cout << "-1";
  return 0;
}
