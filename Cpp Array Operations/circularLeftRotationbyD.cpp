#include <iostream>

using namespace std;

void reverse(int arr[], int start, int end) {
    while(start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotateD(int arr[], int n, int d) {
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main()
{
    cout << "This is a CPP program to left circularly rotate an array by d places!!!" << endl << endl;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: \n";
    for(int i=0;i<n;i++) cin >> arr[i];
    int d;
    cout << "Enter the number d: ";
    cin >> d;
    d = d%n;
    leftRotateD(arr, n, d);
    cout << "After rotating the elements by " << d << " places the array is: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    return 0;
}
