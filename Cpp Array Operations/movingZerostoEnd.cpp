#include <iostream>

using namespace std;

void movingZeros(int arr[], int n) {
    int curr=0;
    for(int i=0;i<n;i++) {
        if(arr[i]!=0) {
            int temp = arr[i];
            arr[i] = arr[curr];
            arr[curr] = temp;
            curr++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of array: " << endl;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    movingZeros(arr, n);
    cout << "Elements of array after moving zeros to the end: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    return 0;
}
