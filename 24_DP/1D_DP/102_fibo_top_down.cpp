#include<bits/stdc++.h>
using namespace std;

int fibo(vector<int> &dp, int n)
{
        // step 1 Base Case
        if(n==1 or n==0) return n;

        // step 2  it means fibo(n) is allready calculated and memoized.
        if(dp[n] != -1) 
        return dp[n];

        //step 3
        dp[n] = fibo(dp, n-1) + fibo(dp, n-2);
        return dp[n]; 
}

int main()
{
        int n;
        cin>>n; 
        vector<int> dp(n+1, -1); // creating a dp array for memoization.
        cout<< fibo(dp, n) <<endl;

}