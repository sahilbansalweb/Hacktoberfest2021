// C program for implementation of Selection sort - ascending order
#include <stdio.h>  
  
void selection(int arr[], int n)  
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)    // One by one move boundary of unsorted subarray  
    {  
        small = i; //minimum element in unsorted array  
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  
// Swap the minimum element with the first element  
    int temp = arr[small];  
    arr[small] = arr[i];  
    arr[i] = temp;  
    }  
}  
  
void printArr(int a[], int n) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[] = {11,6,8,19,4,10,5,17,43,49,31};  
    int n = sizeof(a) / sizeof(a[0]);  
      
    selection(a, n);  
    printf("\nSorted array using Selection sort (ascending) are: \n");    
    printArr(a, n);  
    return 0;  
}    
