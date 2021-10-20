// 2. To count the number of digits divisible by 3 in an integer
#include<stdio.h>
int digCounter(int n);
int main(){
  int num;
  printf("Enter an integer: ");
  scanf("%d",&num);
  printf("\nNo. of digs div by 3 found: %d\n",digCounter(num));
  return 0;
}

int digCounter(int n){
  if(n==0) return 0;
  else{
    if((n%10)%3==0) return 1+digCounter(n/10);
    else return digCounter(n/10);
  }
}