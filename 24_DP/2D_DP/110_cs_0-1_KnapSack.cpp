#include <bits/stdc++.h> 
using namespace std;

// basic recursion solution -> T.C = O(2^n) 
int recursion(vector<int> weight, vector<int> value, int index, int capacity)
{
	// base case
	if(index == 0)
	{
		if(weight[0] <= capacity) return value[0];
		else return 0;
	}

	int include = 0, exclude = 0;
	if(weight[index] <= capacity) 
		include = value[index] + recursion(weight, value, index-1, capacity-weight[index]);
	exclude = 0 + recursion(weight, value, index-1, capacity);

	return max(exclude, include);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return recursion(weight, value, n-1, maxWeight);
}

// recursion + memoization -> top down approach -> T.C = O(n*maxweight); S.C = O(2*n*maxweight)
int memo(vector<int> weight, vector<int> value, int index, int capacity,
		vector<vector<int>> &dp)
{
	// base case
	if(index == 0)
	{
		if(weight[0] <= capacity) return value[0];
		else return 0;
	}

	if(dp[index][capacity] != -1) return dp[index][capacity];

	int include = 0, exclude = 0;
	if(weight[index] <= capacity) 
		include = value[index] + memo(weight, value, index-1, capacity-weight[index], dp);
	exclude = 0 + memo(weight, value, index-1, capacity, dp);

	dp[index][capacity] = max(exclude, include);
	return dp[index][capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>> dp(n, vector<int>(maxWeight+1, -1));
	return memo(weight, value, n-1, maxWeight, dp);
}

// tabulation -> bottom up approach -> T.C = O(n*maxweight); S.C = O(n*maxweight)
int tabulation(vector<int> weight, vector<int> value, int n, int capacity)
{
	// step 1 -> initilize dp array
	vector<vector<int>> dp(n, vector<int>(capacity+1, 0));
	// step 2 -> base case 
	for(int w = weight[0]; w<=capacity; w++)
	{
		if(weight[0] <= capacity) 
			dp[0][w] = value[0];
		else 
			dp[0][w] = 0;
	}

	// step 3 -> complete dp array
	for(int i=1; i<n; i++)
	{
		for(int w=0; w<=capacity; w++)
		{
			int include = 0, exclude = 0;
			if(weight[i] <= w)
				include = value[i] + dp[i-1][w-weight[i]];
			exclude = 0 + dp[i-1][w];

			dp[i][w] = max(include, exclude);
		}	
	}
	return dp[n-1][capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return tabulation(weight, value, n, maxWeight);
}

// space optimization -> T.C = O(n*maxweight); S.C = O(2*maxweight) 

// here space optimization is possible as we se dp[i] depends only on dp[i-1]; so if we create two vectors
// of size capacity+1 then we can solve the above problem without creatinng the whole 2D dp array.
int spaceOptimization(vector<int> weight, vector<int> value, int n, int capacity)
{
	// step 1 create arrays
	vector<int> prev(capacity+1, 0);
	vector<int> curr(capacity+1, 0);

	// step 2 : analyse base case
	for(int w=weight[0]; w<=capacity; w++)
	{
		if(weight[0] <= capacity)
			prev[w] = value[0];
		else prev[w] = 0;
	}

	// step 3 -> check for remaining cases
	for(int i=1; i<n; i++)
	{
		for(int w=0; w<=capacity; w++)
		{
			int include = 0, exclude = 0;
			if(weight[i] <= w)
				include = value[i] + prev[w-weight[i]];
			exclude = 0 + prev[w];
			curr[w] = max(include, exclude);
		}
		prev = curr;
	}
	return prev[capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return spaceOptimization(weight, value, n, maxWeight);
}

// further the space can be optimized as we can do the calculaitons using single array
// for further details see your notes 
//T.C = O(n*maxweight); S.C = O(maxweight)
int spaceOptimization(vector<int> weight, vector<int> value, int n, int capacity)
{
	// step 1 create arrays
	vector<int> curr(capacity+1, 0);

	// step 2 : analyse base case
	for(int w=weight[0]; w<=capacity; w++)
	{
		if(weight[0] <= capacity)
			curr[w] = value[0];
		else curr[w] = 0;
	}

	// step 3 -> check for remaining cases
	for(int i=1; i<n; i++)
	{
		for(int w=capacity; w>=0; w--)
		{
			int include = 0, exclude = 0;
			if(weight[i] <= w)
				include = value[i] + curr[w-weight[i]];
			exclude = 0 + curr[w];
			curr[w] = max(include, exclude);
		}
	}
	return curr[capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return spaceOptimization(weight, value, n, maxWeight);
}