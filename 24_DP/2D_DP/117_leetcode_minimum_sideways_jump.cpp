#include<bits/stdc++.h>
using namespace std;

// recursive solution
int solve(vector<int> &obstacles, int currlane, int currpos)
{
    int n = obstacles.size()-1; // as obstacle of length n consists of n + 1 points labeled from 0 to n
    if(currpos == n) return 0;  // we are at last index;

    if(obstacles[currpos+1] != currlane) // if same lane is clear so continue in same lane
        return solve(obstacles, currlane, currpos+1);
    
    else
    {
        // we have to do sideways jump 
        int ans = INT_MAX;
        for(int i=1; i<=3; i++)
        {
            // we haven't to jump in the same lane and there sould not be any obstacle in the lane we 
            // are going to jump 
            if(currlane != i && obstacles[currpos] != i)
                ans = min(ans, 1 + solve(obstacles, i, currpos));
        }
        return ans;
    }
}

int minSideJumps(vector<int>& obstacles) {
    return solve(obstacles, 2, 0); // at start frog is on lane 2 on index 0 of obstacle array;
}

// recursion + memoization
int memo(vector<int> &obstacles, int currlane, int currpos, vector<vector<int>> &dp)
{
    int n = obstacles.size()-1; // as obstacle of length n consists of n + 1 points labeled from 0 to n
    if(currpos == n) return 0; // we are at last index;
    if(dp[currlane][currpos] != -1) return dp[currlane][currpos];

    if(obstacles[currpos+1] != currlane) // if same lane is clear so continue in same lane
        return memo(obstacles, currlane, currpos+1, dp);
    
    else
    {
        // we have to do sideways jump 
        int ans = INT_MAX;
        for(int i=1; i<=3; i++)
        {
            // we haven't to jump in the same lane and there sould not be any obstacle in the lane we 
            // are going to jump 
            if(currlane != i && obstacles[currpos] != i)
                ans = min(ans, 1 + memo(obstacles, i, currpos, dp));
        }
        dp[currlane][currpos] = ans;
        return dp[currlane][currpos];
    }
}

int minSideJumps(vector<int>& obstacles) {

    vector<vector<int>> dp(4, vector<int>(obstacles.size(), -1));
    return memo(obstacles, 2, 0, dp);
    
}
