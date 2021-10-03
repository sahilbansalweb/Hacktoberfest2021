#include<bits/stdc++.h>
using namespace std;

vector<string>fun(string str)
{
    vector<string>ans;
    
    int n=str.size();
    int powSize=pow(2,n);
    for(int i=0;i<powSize;i++)
    {
        string s="";
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {s+=str[j];}
        }
        if(s.size()>0)
        {ans.push_back(s);}
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string s;
    cin>>s;
    vector<string>v;
    v=fun(s);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}