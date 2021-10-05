//gfg problem
// Leaders in an array 
/*
Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

Example :

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.*/
// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number


#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
          vector<int> l;
        
         unsigned int max = a[n-1];
        for( int i =n-1; i >= 0; i--){
            if(a[i] >= max){
                max = a[i];
                l.push_back(max);
            }
        }
        reverse(l.begin(), l.end());
        return l;
        
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
