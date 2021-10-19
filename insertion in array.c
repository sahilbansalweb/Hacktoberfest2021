#include <stdio.h>
#include <conio.h>
int main()
{
  int array[50], position, c, n, value,ch;    
  printf("Enter number of elements in the array\n");
  scanf("%d", &n);    
  printf("Enter %d elements\n", n);    
  for (c = 0; c < n; c++)    
  scanf("%d", &array[c]);   

  printf("press 1 to insert at end and 0 to insert at specified position ");
  scanf("%d",&ch);

  if (ch==1)
    {
      position=n+1;    
      printf("Please enter the value\n");
      scanf("%d", &value);    
    for (c = n - 1; c >= position - 1; c--)    
      array[c+1] = array[c];    
      array[position-1] = value;    
      printf("Resultant array is\n");    
    for (c = 0; c <= n; c++)    
      printf("%d  ", array[c]);      
    }
      else 
    {
      printf("Please enter the location where you want to insert an new element\n");
      scanf("%d", &position);   
      printf("Please enter the value\n");
      scanf("%d", &value);    
    for (c = n - 1; c >= position - 1; c--)    
        array[c+1] = array[c];    
        array[position-1] = value;    
        printf("Resultant array is\n");    
    for (c = 0; c <= n; c++)    
        printf("%d  ", array[c]);      
      }    
}