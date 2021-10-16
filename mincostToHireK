/*  Minimum Cost to Hire K workers
Question Link: https://leetcode.com/problems/minimum-cost-to-hire-k-workers/

There are n workers. You are given two integer arrays quality and wage where quality[i] is the quality of the ith worker and wage[i] is the minimum wage expectation for the ith worker.

We want to hire exactly k workers to form a paid group. To hire a group of k workers, we must pay them according to the following rules:

Every worker in the paid group should be paid in the ratio of their quality compared to other workers in the paid group.
Every worker in the paid group must be paid at least their minimum wage expectation.
Given the integer k, return the least amount of money needed to form a paid group satisfying the above conditions. Answers within 10-5 of the actual answer will be accepted.

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//function which returns minCostToHireK workers
double minCostToHireKWorkers(int quality[],int wage[],int k,int n){
	vector<vector<double>>workers;
    //We pay wage to every worker in the group with the same ratio compared to his own quality.
	for(int i=0;i<n;i++)
	workers.push_back({(double)(wage[i])/quality[i],(double)quality[i]});
  /*  So to minimize the total wage, we want a small ratio.
So we sort all workers with their expected ratio, and pick up K first worker.*/
	sort(workers.begin(),workers.end());
	 double res = DBL_MAX, qSum = 0;
        priority_queue<int> pq;
         for (auto worker: workers) {
             qSum+=worker[1];
             pq.push(worker[1]);
             if (pq.size() > k)
                 qSum -= pq.top(), pq.pop();
             if (pq.size() == k) res = min(res, qSum * worker[0]);
    }
        return res;
}
int main(){
	int n;
	cin>>n;
	int quality[n],wage[n];
	for(int i=0;i<n;i++)
	cin>>quality[i];
	for(int i=0;i<n;i++)
	cin>>wage[i];
	int k;
	cin>>k;
	cout<<minCostToHireKWorkers(quality,wage,k,n)<<endl;
	return 0;
}

/* 
Test Case 1 :
Input: quality = [10,20,5], wage = [70,50,30], k = 2
Output: 105.00000

Test Case 2 :
Input: quality = [3,1,10,10,1], wage = [4,8,2,2,7], k = 3
Output: 30.66667


Time Complexity : O(nlogn)
Space Complexity : O(n)
*/