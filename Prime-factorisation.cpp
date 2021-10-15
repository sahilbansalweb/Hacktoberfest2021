>> Prime Factorisation
                          
            >>> Resources:
            
                T-1: https://cp-algorithms.com/algebra/factorization.html
                T-2: https://www.geeksforgeeks.org/prime-factorization-using-sieve-olog-n-multiple-queries/
                
            >>> Implementation:O(N log(log(N)))
    
                int n;
                vector<int> primefactor;
                if(n%2==0)
                {
                    primefactor.push_back(2);
                    while(n%2==0)
                    {
                        n/=2;
                    }
                }
                for(int j=3;j<=sqrt(n);j++)
                {
                    if(n%j==0)
                    {
                        primefactor.push_back(j);
                        while(n%j==0)
                        {
                            n/=j;
                        }
                    }
                }
                if(n>2)
                {
                    primefactor.push_back(n);
                }
                
                
                
                IMPLEMENTATION-2 : O(N log(N)) Useful in case of Integer Factorisation of N numbers.
            
                const int N=10000000;
                int prime[N];
                vector<int> primefact;
                void precompute()
                {
                    for(int i=0;i<N;i++)
                    {
                        prime[i]=i;
                    }
                    for(int i=2;i<N;i+=2)
                    {
                        prime[i]=2;
                    }
                    for(int i=3;i<=sqrt(N);i++)
                    {
                        for(int j=i*i;j<N;j+=i)
                        {
                            if(prime[j]==j)
                            {
                                prime[j]=i;
                            }
                        }
                    }
                }
                void getprimefact(int n)
                {
                    while(n!=1)
                    {
                        primefact.push_back(prime[n]);
                        n/=prime[n];
                    }
                }
                
           
