// Finding Maximum element in an array

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,98,7,5,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    for (int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    cout<<"The maximum element of the array is "<<maxi<<endl;
    return 0;
}
