#include <iostream>

#include<cmath>
using namespace std;
int balancedBTs(int n) {
    // Write your code here
     int mod =  (pow(10, 9)) + 7;
    int dp[n + 1]; 
    //base cases 
    dp[0] = dp[1] = 1; 
    for(int i = 2; i <= n; i++) { 
        dp[i] = ((long)dp[i - 1] * ((2 * (long)dp [i - 2])%mod + dp[i - 1])%mod) % mod; 
    } 
    return dp[n]; 
}


int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}