// Program to implement Merge Sorting by Divide and Conquer Algorithm

#include <iostream>
using namespace std;

int a[100];
void merge(int,int,int);
void merge_sort(int low,int high)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  merge_sort(low,mid);
  merge_sort(mid+1,high);
  merge(low,mid,high);
 }
}
void merge(int low,int mid,int high)
{
 int h,i,j,b[100],k;
 h=low;
 i=low;
 j=mid+1;

 while((h<=mid)&&(j<=high))
 {
  if(a[h]<=a[j])
  {
   b[i]=a[h];
   h++;
  }
  else
  {
   b[i]=a[j];
   j++;
  }
  i++;
 }
 if(h>mid)
 {
  for(k=j;k<=high;k++)
  {
   b[i]=a[k];
   i++;
  }
 }
 else
 {
  for(k=h;k<=mid;k++)
  {
   b[i]=a[k];
   i++;
  }
 }
 for(k=low;k<=high;k++) a[k]=b[k];
}
int main()
{
 int num,i;

 cout<<"Enter no.of elements you want to sort:";
 cin>>num;

 cout<<"Enter "<< num <<" Elements : "<<endl;

 for(i=1;i<=num;i++)
 {
  cout<<i<<" Element : ";
  cin>>a[i] ;
 }
 merge_sort(1,num);
 cout<<endl;
 cout<<"After Merge Sort, Sorted Array is :"<<endl;

 for(i=1;i<=num;i++)
 {
      cout<<a[i]<<" ";
 }

 cout<<endl;

return 0;
}


/*

Output :- 

Enter no.of elements you want to sort: 6
Enter 6 Elements :
1 Element : 6
2 Element : 2
3 Element : 7
4 Element : 1
5 Element : 0
6 Element : 10
After Merge Sort, Sorted Array is :
0       1       2       6       7       10

*/
