#include<bits/stdc++.h>
using namespace std;

// recursion 
    int solve(vector<vector<int>> &mat, int row, int col, int &maxi)
    {
        // base case
        if(row >= mat.size() || col >= mat[0].size()) return 0;
        
        int right = solve(mat, row, col+1, maxi);
        int diagonal = solve(mat, row+1, col+1, maxi);
        int bottom = solve(mat, row+1, col, maxi);
        
        if(mat[row][col] == 1) 
        {
            int ans = 1 + min(right, min(diagonal, bottom));
            maxi = max(maxi, ans);
            return ans;
        }
        else return 0;
    }
    
    // recursion + memoization , T.C->O(n*m), S.C->O(2*n*m);
    int memo(vector<vector<int>> &mat, int row, int col, int &maxi, vector<vector<int>> &dp)
    {
        if(row >= mat.size() || col >= mat[0].size()) return 0;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        int right = memo(mat, row, col+1, maxi, dp);
        int diagonal = memo(mat, row+1, col+1, maxi, dp);
        int bottom = memo(mat, row+1, col, maxi, dp);
        
        if(mat[row][col] == 1) 
        {
            dp[row][col] = 1 + min(right, min(diagonal, bottom));
            maxi = max(maxi, dp[row][col]);
            return dp[row][col];
        }
        else return dp[row][col] = 0;
    }
    
    // tabulation , T.C->O(n*m), S.C->O(n*m)
    int tabulation(vector<vector<int>> &mat, int &maxi)
    {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>> dp(row+1, vector<int>(col+1, 0));
        
        for(int i = row-1; i>=0; i--)
        {
            for(int j = col-1; j>=0; j--)
            {
                int right = dp[i][j+1];
                int diagonal = dp[i+1][j+1];
                int bottom = dp[i+1][j];
                
                if(mat[i][j] == 1) 
                {
                    dp[i][j] = 1 + min(right, min(diagonal, bottom));
                    maxi = max(maxi, dp[i][j]);
                }
                
                else dp[i][j] = 0;
            }
        }
    }
    
    // space optimization T.C->O(n*m), S.C->O(m)
    int spaceOptimization(vector<vector<int>> mat, int &maxi)
    {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<int> curr(col+1, 0); // i
        vector<int> next(col+1, 0); // i+1
        
        for(int i = row-1; i>=0; i--)
        {
            for(int j = col-1; j>=0; j--)
            {
                int right = curr[j+1];
                int diagonal = next[j+1];
                int bottom = next[j];
                
                if(mat[i][j] == 1) 
                {
                    curr[j] = 1 + min(right, min(diagonal, bottom));
                    maxi = max(maxi, curr[j]);
                }
                
                else curr[j] = 0;
            }
            next = curr;
        }
    }
    
    int maxSquare(int n, int m, vector<vector<int>> mat){
        int maxi = 0;
        // vector<vector<int>> dp(n, vector<int>(m, -1));
        // memo(mat, 0, 0, maxi, dp);/
        // tabulation(mat, maxi);
        // return maxi;
        spaceOptimization(mat, maxi);
        return maxi;
    }