class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char,int>um;
        int n=s.length();
        int i=0,j=0,ans=0;
        
        while(j<n)
        {
            if(um.find(s[j])!=um.end())
            {
                while(s[i]!=s[j])
                {
                    um.erase(s[i]);
                    i++;
                }
                
                um.erase(s[i]);
                ans=max(ans, j-i);
                i++;
            }
            
            um[s[j]]=1;
            ans=max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};