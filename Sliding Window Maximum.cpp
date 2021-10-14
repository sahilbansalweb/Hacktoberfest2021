#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        
        deque<int> dq;
        
        for(int i = 0; i < k; i++)
        {
            while(!dq.empty() && nums[i] >= nums[dq.back()])
                dq.pop_back();
            
            dq.push_back(i);
        }
        
        for(int i = k; i < nums.size(); i++)
        {
            ans.push_back(nums[dq.front()]);
            
            while(!dq.empty() && dq.front() <= (i-k))
                dq.pop_front();
            
            while(!dq.empty() && nums[i] > nums[dq.back()])
                dq.pop_back();
            
            dq.push_back(i);
        }
        
        if(!dq.empty())
        ans.push_back(nums[dq.front()]);
        
        return ans;
    }
};

int main()
{
  int n, k;
  cout<<"Enter the size of Array :- ";
  cin>>n;
  cout<<"Enter the value of K :- ";
  cin>>k;
  
  vector<int> A;
  
  for(int i = 0; i < n; i++)
  {
    int t;
    cin>>t;
    A.push_back(t);
  }
  
  Solution obj;
  vector<int> ans = obj.maxSlidingWindow(A, k);
  
  for(int x : ans)
    cout<<x<<" ";
}
