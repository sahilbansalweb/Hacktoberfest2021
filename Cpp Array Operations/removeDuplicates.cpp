#include <iostream>

using namespace std;

int removeDuplicates(int arr[], int n) {
    int curr=1;
    for(int i=1;i<n;i++) {
        if(arr[i]!=arr[i-1]) {
            arr[curr] = arr[i];
            curr++;
        }
    }
    return curr;
}

int main()
{
    cout << "This is a CPP program to remove duplicate elements from a sorted array!!!" << endl;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i=0;i<n;i++) cin >> arr[i];
    int x = removeDuplicates(arr, n);
    
    cout << "After removing the duplicates, the array elements are: ";
    for(int i=0;i<x;i++) cout << arr[i] << " ";

    return 0;
}
