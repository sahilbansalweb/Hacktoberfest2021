// 3. To find the second largest number of an integer array
#include<stdio.h>
int secLargest(int arr[],int len, int i, int lar, int secLar);
int main(){
  int n;
  printf("Enter the length of array: "); scanf("%d%*c",&n);
  int dat[n];
  for(int x=0;x<n;x++){
    printf("\nEnter element %d: ",x+1);
    scanf("%d%*c",&dat[x]);
  }
  printf("\nThe second largest numeber: %d\n",secLargest(dat,n,0,-999,-9999));
  return 0;
}

int secLargest(int arr[],int len, int i, int lar, int secLar){
  if(i==len) return secLar;
  else{
    if(arr[i]>secLar && arr[i]!=lar){
      if(arr[i]>lar){secLar=lar;lar=arr[i];}
      else secLar=arr[i];
    }
    return secLargest(arr,len,++i,lar,secLar);
  }
}