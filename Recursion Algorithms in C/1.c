// 1. To count number of vowels in a string
#include<stdio.h>
int vowelCounter(char *str,int i);
int main(){
  char data[20];
  printf("Enter the string: ");
  scanf("%s%*c",data);
  printf("\nNo. of vowels found: %d\n",vowelCounter(data, 0));
  return 0;
}

int vowelCounter(char *str,int i){
  if(str[i]=='\0') return 0;
  else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    return(1+vowelCounter(str,++i));
  }
  else return vowelCounter(str,++i);
}