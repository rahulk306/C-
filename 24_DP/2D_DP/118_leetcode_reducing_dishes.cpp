#include<bits/stdc++.h>
using namespace std;


int recursion(vector<int> &satisfaction, int size, int index, int time)
{
    if(index == size) return 0;

    int include = satisfaction[index] * (time) + recursion(satisfaction, size, index+1, time+1);
    int exclude = 0 + recursion(satisfaction, size, index+1, time);
    
    return max(include, exclude);
}

int maxSatisfaction(vector<int>& satisfaction) {
    int size = satisfaction.size();
    sort(satisfaction.begin(), satisfaction.end());
    return recursion(satisfaction, size, 0, 1);
}

int memo(vector<int> &satisfaction, int size, int index, int time, vector<vector<int>> &dp)
{
    if(index == size) return 0;
    if(dp[index][time] != -1) return dp[index][time];

    int include = satisfaction[index] * (time) + memo(satisfaction, size, index+1, time+1, dp);
    int exclude = 0 + memo(satisfaction, size, index+1, time, dp);
    
    dp[index][time] = max(include, exclude);
    return dp[index][time];
}

int maxSatisfaction(vector<int>& satisfaction) {
    int size = satisfaction.size();
    sort(satisfaction.begin(), satisfaction.end());
    vector<vector<int>> dp(size+1, vector<int>(size+1, -1));
    return memo(satisfaction, size, 0, 1, dp);
}

int tabulation(vector<int> &satis)
{
    int size = satis.size();
    
    vector<vector<int>> dp(size+1, vector<int> (size+1, 0));

    for(int index=size-1; index>=0; index--)
    {
        for(int time = index; time>=0; time--)
        {
            int include = satis[index]*(time+1) + dp[index+1][time+1];
            int exclude = 0 + dp[index+1][time];

            dp[index][time] = max(include, exclude);
        }
    }
    return dp[0][0];
}

int maxSatisfaction(vector<int>& satisfaction) {
    int size = satisfaction.size();
    sort(satisfaction.begin(), satisfaction.end());
    return tabulation(satisfaction);
}

int spaceOptimization(vector<int> &satis, int size)
{
    vector<int> curr(size+1, 0);
    vector<int> next(size+1, 0);

    for(int index = size-1; index>=0; index--)
    {
        for(int time = index; time>=0; time--)
        {
            int include = satis[index]*(time+1) + next[time+1];
            int exclude = 0 + next[time];

            curr[time] = max(include, exclude);
        }
        next = curr;
    }
    return next[0];
}

int maxSatisfaction(vector<int>& satis) {
    
    int size = satis.size();
    sort(satis.begin(), satis.end());

    return spaceOptimization(satis, size);
}
