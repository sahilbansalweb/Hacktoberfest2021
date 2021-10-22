// 7. Remove duplicates from an array
#include<stdio.h>
void remDup(int arr[],int i,int uniq[],int *j, int n);
int main(){
  int n;
  printf("Enter the length of array: "); scanf("%d%*c",&n);
  int dat[n],res[n];
  for(int x=0;x<n;x++){
    printf("\nEnter element %d: ",x+1);
    scanf("%d%*c",&dat[x]);
  }
  printf("\nInput array: ");
  for(int i=0;i<n;i++) printf("%d ",dat[i]);
  int size=0;
  int *pSize=&size; 
  remDup(dat, 0, res, pSize, n);
  printf("\nAfter removing duplicates: ");
  for(int i=0;i<size;i++) printf("%d ",res[i]);
  printf("\n");
  return 0;
}

void remDup(int arr[],int i,int uniq[],int *j, int n){
  if(i==n){}
  else{
    int exist=0;
    for(int x=0;x<*j;x++){
      if(uniq[x]==arr[i]){exist=1;break;}
    }
    if(exist) remDup(arr, ++i, uniq, j, n);
    else{
      uniq[(*j)++]=arr[i];
      remDup(arr, ++i, uniq, j, n);
    }
  }
}