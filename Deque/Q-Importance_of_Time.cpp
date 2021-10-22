#include<iostream>
#include<deque>
using namespace std;
int main() 
{
	deque<int> cq;
	deque<int> iq;
	int n,data1,data2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>data1;
		cq.push_back(data1);
	}
	for(int i=0;i<n;i++)
	{
		cin>>data2;
		iq.push_back(data2);
	}
	int count=0;
	while(!iq.empty())
	{
		int x=cq.front();
		int y=iq.front();
		if(x==y)
		{
			count+=1;
			cq.pop_front();
			iq.pop_front();
		}
		else
		{
			count+=1;
			cq.pop_front();
			cq.push_back(x);
		}
	}
	cout<<count;

	return 0;
}
