// 4. To generate fibonacci series
#include<stdio.h>
int fibo(int n);
int main(){
  int num;
  printf("Enter the len of the fibonacci series: ");
  scanf("%d",&num);
  printf("\nThe fibonacci series:\n");
  for(int i=1;i<=num;i++) printf("%d ",fibo(i));
  printf("\n");
  return 0;
}

int fibo(int n){
  if(n==1 || n==2) return 1;
  else return fibo(n-1)+fibo(n-2);
}