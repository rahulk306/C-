#include <bits/stdc++.h> 
using namespace std;

// self made -> recursion + memoization 
int solve(vector<int> &num, int n, int tar, vector<int> &dp)
{
    if(tar==0) return 1;
    if(tar<0) return 0;
    if(dp[tar] != -1) return dp[tar];

    dp[tar] = 0;
    for(int i=0; i<n; i++)
    {
        dp[tar] += solve(num, n, tar-num[i], dp);
    }
    return dp[tar];
}
int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<int> dp(tar+1, -1);
    return solve(num, n, tar, dp);
}

// tabulation
#include <bits/stdc++.h> 

int tabulation(vector<int> &num, int tar)
{
    vector<int> dp(tar+1, 0);
    dp[0] = 1;
    for(int i=1; i<=tar; i++)
    {
        for(int j=0; j<num.size(); j++)
        {
            if(i-num[j]>=0)
            dp[i] += dp[i - num[j]];
        }
    }
    return dp[tar];
}
int findWays(vector<int> &num, int tar)
{
    return tabulation(num, tar);
}