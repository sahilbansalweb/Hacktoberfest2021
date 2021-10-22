#include<iostream>
#include<deque>
using namespace std;
int main()
{
	int n;
	int a[1000];
	int k;
	cin>>n;
	int i;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	//we have to process first k elements seprately
	deque<int> q(k);
	for(i=0;i<k;i++)
	{
		while(!q.empty() and a[i]>a[q.back()])        // first timethe q will be empty,untill i is pushed. So for 1st time while loop won't execute.
		{
			q.pop_back();                              // here if element at a[1]>a[0]   (~ a[q.back(0)]=a[0]  & a[i]=a[1]) then pop it.
		}
		q.push_back(i);                               // push the index with max sum.
	}
	
	//PROCESS FOR THE REMAINING ELEMENTS
	
	for(;i<n;i++)
	{
		cout<<a[q.front()]<<" ";                      //will print the max element for the first window
		
		// 1. REMOVE THE ELEMENTS WHICH ARE NOT THE PART OF THE WINDOW (CONTRACTION)
		while((!q.empty() and (q.front()<=i-k)))
		{
			q.pop_front();
		}
		// 2. REMOVE THE ELEMENTS WHIICH ARE NOT IN THE WINDOW AND ARE NOT USEFULL
		while(!q.empty() and a[i]>=a[q.back()])
		{
			q.pop_back();			
		}
		// 3. ADD THE NEW ELEMENTS(EXPANSION)
		q.push_back(i); 
	}
	cout<<a[q.front()]<<endl;	
	return 0;
}

/*  i/p:
        9
        1 2 3 1 4 5 2 3 6
        3
	o/p:
	    3 3 4 5 5 5 6    
*/
