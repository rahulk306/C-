#include<bits/stdc++.h>
int mod = 1e9+7;
// top down approach -> recursion + memoization
int solve1(vector<int> &cost, int n, vector<int> &dp)
{
    // base case
    if(n==0) return cost[0];
    if(n==1) return cost[1];

    // step 3
    if(dp[n] != -1) return dp[n];

    // step 2
    dp[n] = min(solve(cost, n-1, dp), solve(cost, n-2, dp)) + cost[n];
    return dp[n];
}

// bottom up approach -> tabulation method
int solve2(vector<int> &cost, int n, vector<int> &dp)
{
    int size = cost.size();
    vector<int> dp(size+1, -1); //step 1 creation of dp array
    dp[0] = cost[0]; // step 2 base case
    dp[1] = cost[1];
    for(int i=2; i<size; i++) // step 3
        dp[i] = ( min( dp[i-1] , dp[i-2] ) + cost[i]) % mod;

    return min(dp[size-1], dp[size-2]);
}

// space optimization method
int solve3(vector<int> &cost, int n)
{
    int prev2 = cost[0];
    int prev1 = cost[1];

    for(int i=2; i<n; i++)
    {
        int curr = cost[i] + min(prev1 , prev2);
        prev2 = prev1; 
        prev1 = curr;
    }
    return min(prev1, prev2);
}

int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    // step 1
    vector<int> dp(n+1, -1);
    return min(solve1(cost, n-1, dp), solve1(cost, n-2, d0)); 
    // tabulation method -> return solve2(cost, n, dp);
    // space optimization -> return solve2(cost, n);
} 