#include <bits/stdc++.h> 

int mod = 1e9+7;
// recursion + memoization -> top down approach
int help(vector<int> &dp, int n)
{
    if(n<0) return 0;
    if(dp[n] != -1) return dp[n];
    dp[n] = (help(dp, n-1) + help(dp, n-2)) % mod;
    return dp[n];
}

int countDistinctWays(int nStairs) {

    vector<int> dp(nStairs+1, -1);
    dp[0] = 1;
    return help(dp, nStairs);
}


// tabulation method -> bottom up approach.
int countDistinctWays(int nStairs) {

    vector<int> dp(nStairs+1, -1);
    dp[0] = 1; dp[1] = 1;
    for(int i=2; i<=nStairs; i++)
        dp[i] = (dp[i-1] + dp[i-2]) % mod;
    return dp[nStairs];
}