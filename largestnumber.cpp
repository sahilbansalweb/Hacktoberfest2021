#include <iostream>

using namespace std;
int main() {
  int n;
  double arr[100];
 cout<<"Enter the number of elements (1 to 100):";
  cin>>n;

  for (int i = 0; i < n; ++i) {

    cout<<"Enter number ";
    cin>>arr[i];
  }

  
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
         
          cout<<"Largest element="<<arr[0];

  return 0;
}