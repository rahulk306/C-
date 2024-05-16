#include<bits/stdc++.h>
// self made without help.

int solve(int n, int x, int y, int z, int count, int &ans, vector<int> &dp)
{
	// base case
	if(n==0)
	{
		ans = max(count, ans);
		return ans;
	}
	if(n<0) return 0;
	if(dp[n] != -1) return dp[n];
	int inx = solve(n-x, x, y, z, count+1, ans, dp);
	int iny = solve(n-y, x, y, z, count+1, ans, dp);
	int inz = solve(n-z, x, y, z, count+1, ans, dp);
	dp[n] = max(inx, max(iny, inz));
}

int cutSegments(int n, int x, int y, int z) {
	int ans = 0;
	vector<int> dp(n+1, -1);
	vector<int> temp;
	temp.push_back(x);
	temp.push_back(y);
	temp.push_back(z);
	sort(temp.begin(), temp.end());
	solve(n, temp[0], temp[1], temp[2], 0, ans, dp);
	return dp[n];
}

// recursion + memoization
#include<bits/stdc++.h>
int solve(int n, int x, int y, int z, vector<int> &dp)
{
	// base case
	if(n==0) return 0;
	if(n<0) return INT_MIN;

	if(dp[n] != -1) return dp[n];

	int inx = solve(n-x, x, y, z, dp)+1;
	int iny = solve(n-y, x, y, z, dp)+1;
	int inz = solve(n-z, x, y, z, dp)+1;
	dp[n] = max(inx, max(iny, inz));
	return dp[n];
}

int cutSegments(int n, int x, int y, int z) {

	vector<int> dp(n+1, -1);
	int ans = solve(n,x, y, z, dp);
	if(ans < 0) return 0;
	return ans;
}

// tabulation
#include<bits/stdc++.h>

int tabulation(int n, int x, int y, int z)
{
	vector<int> dp(n+1, INT_MIN);
	dp[0] = 0;

	for(int i=1; i<n+1; i++)
	{
		if(i-x >= 0) dp[i] = max(dp[i-x] + 1, dp[i]);
		if(i-y >= 0) dp[i] = max(dp[i-y] + 1, dp[i]);
		if(i-z >= 0) dp[i] = max(dp[i-z] + 1, dp[i]);
	}
	if(dp[n] < 0) return 0;
	else return dp[n];
}

int cutSegments(int n, int x, int y, int z) {

	return tabulation(n, x, y, z);
}