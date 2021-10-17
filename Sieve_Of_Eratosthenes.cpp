/* Contributor - Ankit Kumar Srivastava */


/* C++ program to generate all prime_numbers numbers
 less than N in O(N) */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MAX_SIZE = 1e6+1;
/* isprime_numbers[] : isprime_numbers[i] is true if number is prime_numbers
  prime_numbers[] : stores all prime_numbers number less than N
  SPF[] that store smallest prime_numbers factor of number
  [for Exp : smallest prime_numbers factor of '8' and '16'
  is '2' so we put SPF[8] = 2 , SPF[16] = 2 ]  */
vector<ll >isprime_numbers(MAX_SIZE , true);
vector<ll >prime_numbers;
vector<ll >SPF(MAX_SIZE);

// function generate all prime_numbers number less then N in O(n)
void sieve_change(ll N)
{
    // 0 and 1 are not prime_numbers
    isprime_numbers[0] = isprime_numbers[1] = false ;

    // Fill rest of the entries
    for (ll i=2; i<N ; i++)
    {
        // If isprime_numbers[i] == True then i is
        // prime_numbers number
        if (isprime_numbers[i])
        {
            // put i llo prime_numbers[] vector
            prime_numbers.push_back(i);

            // A prime_numbers number is its own smallest
            // prime_numbers factor
            SPF[i] = i;
        }

        // Remove all multiples of  i*prime_numbers[j] which are
        // not prime_numbers by making isprime_numbers[i*prime_numbers[j]] = false
        // and put smallest prime_numbers factor of i*prime_numbers[j] as prime_numbers[j]
        // [ for exp :let  i = 5 , j = 0 , prime_numbers[j] = 2 [ i*prime_numbers[j] = 10 ]
        // so smallest prime_numbers factor of '10' is '2' that is prime_numbers[j] ]
        // this loop run only one time for number which are not prime_numbers
        for (ll j=0; j <  (ll)prime_numbers.size() and i*prime_numbers[j] < N and prime_numbers[j] <= SPF[i]; j++)
        {
            isprime_numbers[i*prime_numbers[j]]=false;
            // put smallest prime_numbers factor of i*prime_numbers[j]
            SPF[i*prime_numbers[j]] = prime_numbers[j] ;
        }
    }
}

// Main function to test the prime number generation using modification of Sieve Of Eratosthenes
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll  N;
    cin >> N; // Must be less than MAX_SIZE
    sieve_change(N);
    // pll all prime_numbers number less then N
    for (ll i=0; i<prime_numbers.size() and prime_numbers[i] <= N ; i++)
        {
            cout << prime_numbers[i] << " ";
        }
    return 0;
}
