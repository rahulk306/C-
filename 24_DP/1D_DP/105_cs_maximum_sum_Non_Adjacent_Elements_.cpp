#include <bits/stdc++.h> 

int solveMemoization(vector<int> &nums, int n, vector<int> &dp)
{
    // base case
    if(n < 0) return 0;
    if(n == 0) return nums[0];

    if(dp[n] != -1) return dp[n];
    
    int include = solveMemoization(nums, n-2, dp) + nums[n];
    int exclude = solveMemoization(nums, n-1, dp) + 0;

    dp[n] = max(include, exclude);
    return dp[n];
}

int solveTabulation(vector<int> &nums, int n)
{
    vector<int> dp(n,0);
    dp[0] = nums[0];
    
    for(int i=1; i<n; i++)
    {
        int include = dp[i-2] + nums[i];
        int exclude = dp[i-1] + 0;
        dp[i] = max(include, exclude);
    }
    return dp[n-1];
}

int solveSpaceOptimization(vector<int> &nums, int n)
{
    int prev2 = 0; 
    int prev1 = nums[0];
    
    for(int i=1; i<n; i++)
    {
        int include = prev2 + nums[i]; 
        int exclude = prev1 + 0;
        int ans = max(include, exclude);
        prev2 = prev1; 
        prev1 = ans;
    }
    return prev1;
}

int maximumNonAdjacentSum(vector<int> &nums){
    
    int n = nums.size();
    vector<int> dp(n, -1);
    //return solveMemoization(nums, n-1, dp); // starting from last index
    //return solveTabulation(nums, n);
    return solveSpaceOptimization(nums, n);
    
}