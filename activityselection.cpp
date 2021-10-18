#include <bits/stdc++.h>
using namespace std;
 

struct Activitiy
{
   int no, start, finish;
};
 

bool activityCompare(Activitiy s1, Activitiy s2)
{
    return (s1.finish < s2.finish);
}
 

void printMaxActivities(Activitiy arr[], int n)
{
    
    sort(arr, arr+n, activityCompare);
 
    cout << "Following activities are selected ";
 
   
    int i = 0;
    cout << arr[i].no<<" ";
 
   
    for (int j = 1; j < n; j++)
    {
      
      if (arr[j].start >= arr[i].finish)
      {
          cout << arr[j].no<<" ";
          i = j;
      }
    }
}
 

int main()
{
    int n;
    cout<<"\nEnter the number of activities ";
    cin>>n;
    Activitiy arr[n]; 
    cout<<"\nEnter the activity no, start time and finih time ";
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the activity no, start time and finih time  of activity "<<(i+1)<<" ";
        cin>>arr[i].no;
        cin>>arr[i].start;
        cin>>arr[i].finish;
    }
   
    printMaxActivities(arr, n);
    return 0;
}

