// coding ninja -> ninja and the fence -> hard level

#include <bits/stdc++.h> 
#define mod 1000000007

int add(int a, int b)
{
    return (a%mod + b%mod)%mod;
}

int multi(int a, int b)
{
    return ( (a%mod) * 1LL * (b%mod) )%mod;
}

// basic recurrsion solution
int solve(int n, int k)
{
    // base case
    if(n==1) return k;
    if(n==2) return add(k, multi(k, k-1));

    int ans = add( multi(solve(n-2, k), k-1), multi(solve(n-1, k), k-1) );
}

int numberOfWays(int n, int k) {
    return solve(n,k);
}

// recurrsion + memoization solution
int solve(int n, int k, vector<int> &dp)
{
    // base case
    if(n==1) return k;
    if(n==2) return add(k, multi(k, k-1));
    if(dp[n] != -1) return dp[n];

    dp[n] = add( multi(solve(n-2, k, dp), k-1), multi(solve(n-1, k, dp), k-1) ); // step 2
    return dp[n];
}

int numberOfWays(int n, int k) {
    vector<int> dp(n+1, -1); // step 1
    return solve(n, k, dp);
}

// tabulation
int tabulation(int n, int k)
{
    vector<int> dp(n+1, 0);
    dp[1] = k;
    dp[2] = add(k, multi(k, k-1));

    for(int i=3; i<=n; i++)
    {
        dp[i] = add( multi(dp[i-2], k-1), multi(dp[i-1], k-1) );
    }
    return dp[n];
}

int numberOfWays(int n, int k) {
    return tabulation(n, k);
}

// space optimization
int spaceOptimization(int n, int k)
{
    int prev2 = k;
    int prev1 = add(k, multi(k, k-1));

    for(int i=3; i<=n; i++)
    {
        int ans = add( multi(prev2, k-1), multi(prev1, k-1) );
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

int numberOfWays(int n, int k) {
    return spaceOptimization(n, k);
}
