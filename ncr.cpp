>> ncr % m 
                        
            >>> Resources:  
            
                T-1 : https://cp-algorithms.com/combinatorics/binomial-coefficients.html
                T-2 : https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/
        
        
            >>> Implementation
        
                ll fact[N], facti[N];
         
                ll be(ll a,ll b)
                {
                    if(b==0)
                    {
                        return 1;
                    }
                    if(b==1)
                    {
                        ll ans=a%M;
                        return ans;
                    }
                    if(b%2==0)
                    {
                        a=a%M;
                        a=(a*a)%M;
                        ll ans=be(a,b/2)%M;
                       return ans; 
                    }
                    else
                    {
                        a=a%M;
                        ll val=a;
                        a=(a*a)%M;
                        ll ans=be(a,b/2)%M;
                        ans=(val*ans)%M;
                        return ans;
                    }
                }
                 
                ll factinv(ll val)
                {
                    /* Modulo Property (a)^-1 = ((a)^(m-2))% m */
                    /* Only If m is a prime */
                	return be(val, M-2);
                }
                void factorialinv()
                {
                    facti[N-1]=factinv(fact[N-1]);
                	for(ll i=N-2;i>=0;i--)
                	{
                		facti[i]=facti[i+1]*(i+1);
                		facti[i]%=M;
                	}
                }
                void factorial()
                {
                	fact[0]=fact[1]=1;
                	for(ll i=2;i<N;i++)
                	{
                		fact[i]=fact[i-1]*i;
                		fact[i]%=M;
                	}
                	factorialinv();
                }
                 
                ll pnc(ll x,ll y)
                {
                	if(y>x)
                	{
                		return 0;
                	}
                	ll num=fact[x];
                	num*=facti[x-y];
                	num%=M;
                	num*=facti[y];
                	num%=M;
                	return num;
                }
        
