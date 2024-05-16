#include<bits/stdc++.h>
using namespace std;

// recursion + memoization
int solve(int n, vector<int> &days, vector<int> &costs, int index, vector<int> &dp)
{
    // base case
    if(index>=n) return 0;
    if(dp[index] != -1) return dp[index];
    
    // 1 day pass
    int opt1 = costs[0] + solve(n, days, costs, index+1, dp);
    
    // 7 days pass
    int i;
    for(i=index; i<n && days[i] < days[index]+7; i++);
    int opt2 = costs[1] + solve(n, days, costs, i, dp);

    // 30 days pass
    for(int i=index; i<n && days[i] < days[index] + 30; i++);
    int opt3 = costs[2] + solve(n, days, costs, i, dp);

    return dp[index] = min(opt1, min(opt2, opt3)); 
}

// tabulation T.C -> O(n) , S.C -> O(n)
int tabulation(int n, vector<int> days, vector<int> costs)
{
    vector<int> dp(n+1, INT_MAX); // here we have used int_max as we have to find the min.
    // base case 
    dp[n] = 0;

    for(int k=n-1; k>=0; k--) // here we are using k as index
    {
        // 1 day pass
        int opt1 = costs[0] + dp[k+1];
        
        // 7 days pass
        int i;
        for(i=k; i<n && days[i] < days[k]+7; i++);
        int opt2 = costs[1] + dp[i];

        // 30 days pass
        for(int i=k; i<n && days[i] < days[k] + 30; i++);
        int opt3 = costs[2] + dp[i];

        dp[k] = min(opt1, min(opt2, opt3));
    }
    return dp[0];
}

int minimumCoins(int n, vector<int> days, vector<int> costs)
{
    vector<int> dp(n+1, -1);
    return tabulation(n, days, costs);
}

// space optimization T.C -> O(n) S.C -> O(1);
// sliding window concept 
int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    int ans = 0;
    queue<pair<int,int>> monthly; // <day, cost>
    queue<pair<int,int>> weekly;

    for(int day: days)
    {
        // step 1 -> remove expired days from the queues
        while(!monthly.empty() && monthly.front().first + 30 <= day) monthly.pop();
        while(!weekly.empty() && weekly.front().first + 7 <= day) weekly.pop();

        // step 2 -> push the current day in the queues
        monthly.push(make_pair(day, ans+cost[2]));
        weekly.push(make_pair(day, ans+cost[1]));

        // step 3 -> update the ans with the minimum of all
        ans = min(ans + cost[0], min(weekly.front().second, monthly.front().second));
    }
    return ans;
}