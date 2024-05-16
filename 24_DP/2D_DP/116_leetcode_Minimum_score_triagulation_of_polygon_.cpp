#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &V, int i, int j)
{
    if(i+1==j) return 0; // as we cannot make a triangle with only two edges

    int ans = INT_MAX; // as we have to find the minimum ans
    for(int k=i+1; k<j; k++)
    {
        ans = min(ans, V[i]*V[k]*V[j] + solve(V, i, k) + solve(V, k, j));
    }
    return ans;
}

int memo(vector<int> &V, int i, int j, vector<vector<int>> &dp)
{
    if(i+1==j) return 0; // as we cannot make a triangle with only two edges
    if(dp[i][j] != -1) return dp[i][j];

    int ans = INT_MAX; // as we have to find the minimum ans
    for(int k=i+1; k<j; k++)
    {
        // step 2 add ans in dp vector
        ans = min(ans, V[i]*V[k]*V[j] + memo(V, i, k, dp) + memo(V, k, j, dp));
    }
    return dp[i][j] = ans;
}

int tabulation(vector<int> &v)
{
    int n = v.size();
    vector<vector<int>> dp(n, vector<int>(n,0));
    for(int i=n-1; i>=0; i--)
    {
        for(int j=i+2; j<n; j++)
        {
            int ans = INT_MAX; 
            for(int k=i+1; k<j; k++)
            {
                ans = min(ans, v[i]*v[k]*v[j] + dp[i][k] + dp[k][j]);
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][n-1];
}

int minScoreTriangulation(vector<int>& values) {
    int n = values.size();
    // step 1 create dp array
    //vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    return tabulation(values);
}