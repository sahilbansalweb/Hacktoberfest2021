// 6. Slice an array with start and end parameters ;Eg, [10,20,30,40,50,60,70],start=1,end=5 -> [20,30,40,50,60]
#include<stdio.h>
void sliceArr(int arr1[],int arr2[], int start, int end, int i);
int main(){
  int n,start,end;
  printf("Enter the length of array: "); scanf("%d%*c",&n);
  int dat[n];
  for(int x=0;x<n;x++){
    printf("\nEnter element %d: ",x+1);
    scanf("%d%*c",&dat[x]);
  }
  printf("start= ");scanf("%d%*c",&start);
  printf("end= ");scanf("%d%*c",&end);
  int res[end-start+1];
  printf("\nInput array: ");
  for(int i=0;i<n;i++) printf("%d ",dat[i]);
  sliceArr(dat, res, start, end,0);
  printf("\nSliced array: ");
  for(int i=0;i<(end-start+1);i++) printf("%d ",res[i]);
  printf("\n");
  return 0;
}

void sliceArr(int arr1[],int arr2[], int start, int end, int i){
  if(start>end){}
  else{
    arr2[i]=arr1[start];
    sliceArr(arr1, arr2, ++start, end, ++i);
  }
}