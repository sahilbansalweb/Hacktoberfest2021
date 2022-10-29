#include <iostream>

using namespace std;

int main() {

   int n, i, j, mid;

   cout << "Enter number of lines: ";

   cin >> n;

   if(n %2 == 1) { //when n is odd, increase it by 1 to make it even

      n++;

   }

   mid = (n/2);

   for(i = 1; i<= mid; i++) {

      for(j = 1; j<=(mid-i); j++) { //print the blank spaces before star

         cout << " ";

      }

      if(i == 1) {

         cout << "*";

      }else{

         cout << "*"; //in each line star at start and end position

         for(j = 1; j<=2*i-3; j++) { //print space to make hollow

            cout << " ";

         }

         cout << "*";

      }

      cout << endl;

   }

   for(i = mid+1; i<n; i++) {

      for(j = 1; j<=i-mid; j++) { //print the blank spaces before star

         cout << " ";

      }

      if(i == n-1) {

         cout << "*";

      }else{

         cout << "*"; //in each line star at start and end position

         for(j = 1; j<=2*(n - i)-3; j++) { //print space to make hollow

            cout << " ";

         }

         cout << "*";

      }

      cout << endl;

   }

}
