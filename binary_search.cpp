#include <bits/c++.h>
int main()
{
  int n,x,low,high; bool flag=false;
  cout<<"Enter size of array";
  cin>>n;
  vector<int> v(n);
  cout<<"Enter input data"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  cout<<"Enter the data to be searched"<<endl;
  
  cin>>x;low=0;high=n-1;
  while(low<high)
  {
    mid= (low+high)/2;
    if(x==v[mid])
    {
      cout<<"Found at index"<<mid<<endl;
      flag=true;
      break;
    }
    else if(v[mid]<x)
    {
      low=mid+1;
    }
    else
      high=mid-1;
    
  }
  if(!flag)
    cout<<"Number do no exist in array"<<endl;
  return 0;
}
      
    
