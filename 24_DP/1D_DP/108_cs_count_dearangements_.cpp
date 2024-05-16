#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

// recursive solution -> TC -> exponential

long long int countDerangements(int n) {
    
    if(n==1) return 0;// base cases
    if(n==2) return 1; 

    int ans=((n-1)%mod * (countDerangements(n-1)%mod + countDerangements(n-2)%mod))%mod;
    return ans;
}

// memoization 

long long int memo(int n, vector<long long int> &dp) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    if(dp[n]!=-1) return dp[n];

    dp[n] = ( (n-1)%mod * ( memo(n-1, dp)%mod + memo(n-2, dp)%mod ) ) % mod;
    return dp[n];
}

long long int countDerangements(int n) {
    
    vector<long long int> dp(n+1, -1);
    return memo(n, dp);
}

//tabulation

long long int tabulation(int n)
{
    vector<long long int> dp(n+1, 0);
    dp[1] = 0;
    dp[2] = 1;

    for(int i=3; i<=n; i++)
    {
        long long int first = dp[i-1] % mod;
        long long int second = dp[i-2] % mod;
        long long int sum = ( first + second ) % mod;
        long long int ans = ((i-1)*sum) % mod;
        dp[i] = ans;
    }
    return dp[n];
}

long long int countDerangements(int n) {
    
    return tabulation(n);

}

// space optimization

long long int spaceOptization(int n)
{
    long long int prev2 = 0;
    long long int prev1 = 1;

    for(int i=3; i<=n; i++)
    {
        long long int first = prev1 % mod;
        long long int second = prev2 % mod;
        long long int sum = ( first + second ) % mod;
        long long int ans = ((i-1)*sum) % mod;
        
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

long long int countDerangements(int n) {
    
    return spaceOptization(n);

}