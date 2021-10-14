//   Rishabh Agarwal
#include <bits/stdc++.h>
#define F first
#define S second
#define MAX 10000003
using namespace std;

typedef long long int ll;
const ll mod = 1e18;
const ll INF= 1e18;
long double PI=3.1415926;

ll power(ll a,ll b){
    if(b==0){
        return 1;
    }
    ll temp=power(a,b/2)%mod;
    if(b%2==0){
        return (temp*temp)%mod;
    }
    else{
        return ((a*temp)%mod*temp)%mod;
    }
}

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

vector<ll>v;
vector<ll>::iterator it;
map<ll,ll>mp;

void primeFactors(ll n)  
{  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        //cout << 2 << " ";  
        mp[2]++;
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            //cout << i << " ";  
            mp[i]++;
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2){ 
        mp[n]++; 
        //cout << n << " "; 
    } 
}  

ll max(ll a, ll b) { return (a > b)? a : b; } 
  
ll knapSack(ll sum, ll wt[], ll val[], ll n,ll W) 
{ 
   ll i, w; 
   ll K[n+1][sum+1]; 
   //memset(K,INF,sizeof(K));
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= sum; w++) 
       { 
           K[i][w]=INF;
           if (w==0) 
               K[i][w] = 0; 
           else if(i==0)
                continue;
           else if (val[i-1] <= w) 
                 K[i][w] = min(wt[i-1] + K[i-1][w-val[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 

         //cout<<K[i][w]<<" ";
       } 
       //cout<<"\n";
   }
   for(ll x=sum; x>=0; x--){
       if(K[n][x]<=W)
            return x;
   } 
}  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    //cin>>t;
    t=1;
    //ll c=1;
    while(t--){
        ll n,w;
        cin>>n>>w;
        ll we[n],va[n];
        ll sum=0;
        for(ll x=0; x<n; x++){
            cin>>we[x]>>va[x];
            sum=sum+va[x];
        }
        cout<<knapSack(sum,we,va,n,w)<<"\n";
        mp.clear();  
        v.clear();
        //cout<<"Case #"<<c<<": "<<ans<<"\n";
        //c++;
    }
    return 0;
}