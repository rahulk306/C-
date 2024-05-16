#include <bits/stdc++.h>
using namespace std ;

// method 1 -> recursion + memoization -> top down approach
int solveMemoization(vector<int> &num, int x, vector<int> &dp)
{
    // base case 
    if(x==0) return 0;
    if(x<0) return INT_MAX;

    if(dp[x] != -1) return dp[x]; // step 3 -> checking in dp array 
    
    int mini = INT_MAX;
    for(int i=0; i<num.size(); i++)
    {
        int ans = solveMemoization(num, x-num[i], dp);
        if(ans != INT_MAX) mini = min(mini, ans+1); // here we have taken ans+1 as result is for x-num[i] for +1 for as we are considersing coin num[i] also
    }
    dp[x] = mini; // step 2 -> updating dp array 
    return mini;
}

// method 2 -> tabulation method -> bottom up approach
int solveTabulation(vector<int> &num, int x, vector<int> &dp)
{
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0; // base case 

    for(int i=1; i<=x; i++) // we are solving for each value from 1 to x amount
    {
        for(int j=0; j<num.size(); j++)
        {
            if( (i-num[j] >= 0) && dp[i-num[j]] != INT_MAX )
                dp[i] = min(dp[i], 1 + dp[i-num[j]]); // if(dp[i-num[j]] = INT_MAX) then 1+dp[i-num[j]] will be out of bound.
        }
    }
    if(dp[x] == INT_MAX) return -1;
    return dp[x];
}

int minimumElements(vector<int> &num, int x)
{
    vector<int> dp(x+1, -1);
    int ans = solveMemoization(num, x, dp); // step 1 -> creating dp array
    dp[0] = 0;
    
    if(ans != INT_MAX) return dp[x];
    return -1;

    return solveTabulation(num, x, dp); // tabulation method calling
}