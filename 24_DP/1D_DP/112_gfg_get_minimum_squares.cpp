#inlcude<bits/stdc++.h>
using namespace std;
int recursion(int n)
{
	if(n==0) return 0;
	
	int ans = n; // max possible made from 1 square
	for(int i=1; i*i<=n; i++)
	{
		ans = min(ans, 1+recursion(n-i*i));
	}
	return ans;
}
	
int memo(int n, vector<int> &dp)
{
	if(n==0) return 0;
	if(dp[n]!=-1) return dp[n];
	
	int ans = n; // max possible made from 1 square
	for(int i=1; i*i<=n; i++)
	{
		ans = min(ans, 1+memo(n-i*i, dp));
	}
	return dp[n] = ans;
}
	
int tabulation(int n)
{
	vector<int> dp(n+1, INT_MAX);
	dp[0] = 0;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j*j<=n; j++)
		{
			if(i-j*j >= 0)
			dp[i] = min(dp[i], 1+dp[i-j*j]);
		}
	}
	return dp[n];
}
	
int MinSquares(int n)
{
	//vector<int> dp(n+1, -1);
	return tabulation(n);
}