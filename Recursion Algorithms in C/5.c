// 5. Create a reversed array from an input array
#include<stdio.h>
void revArr(int arr1[],int arr2[], int size, int i);
int main(){
  int n;
  printf("Enter the length of array: "); scanf("%d%*c",&n);
  int dat[n],revDat[n];
  for(int x=0;x<n;x++){
    printf("\nEnter element %d: ",x+1);
    scanf("%d%*c",&dat[x]);
  }
  printf("\nInput array: ");
  for(int i=0;i<n;i++) printf("%d ",dat[i]);
  revArr(dat,revDat,n,0);
  printf("\nReversed array: ");
  for(int i=0;i<n;i++) printf("%d ",revDat[i]);
  printf("\n")
  return 0;
}

void revArr(int arr1[],int arr2[], int size, int i){
  if(i==size){}
  else{
    arr2[size-1-i]=arr1[i];
    revArr(arr1, arr2, size, ++i);
  }
}