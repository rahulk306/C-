 #include<bits/stdc++.h> 
using namespace std;

// recrursion
int solve(string &a, int lena, string &b, int lenb, int i, int j)
{
    // base case
    if(i == lena) return 0;
    if(j == lenb) return 0;

    int ans = 0;
    if(a[i] == b[j]) ans = 1 + solve(a, lena, b, lenb, i+1, j+1);

    else ans = max(solve(a, lena, b, lenb, i+1, j), solve(a, lena, b, lenb, i, j+1));
    return ans;
}

int longestCommonSubsequence(string text1, string text2) {
    return solve(text1, text1.length(), text2, text2.length(), 0, 0);
}

// memoization
int solve(string &a, int lena, string &b, int lenb, int i, int j, vector<vector<int>> &dp)
{
    // base case
    if(i == lena) return 0;
    if(j == lenb) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    int ans = 0;
    if(a[i] == b[j]) ans = 1 + solve(a, lena, b, lenb, i+1, j+1, dp);

    else ans = max(solve(a, lena, b, lenb, i+1, j, dp), solve(a, lena, b, lenb, i, j+1, dp));
    return dp[i][j] = ans;
}

int longestCommonSubsequence(string text1, string text2) {
    vector<vector<int>> dp(text1.length(), vector<int>(text2.length(), -1));
    return solve(text1, text1.length(), text2, text2.length(), 0, 0, dp);
}

// tabulation
int tabulation(string a, string b)
{
    vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1, 0));
    for(int i=a.length()-1; i>=0; i--)
    {
        for(int j=b.length()-1; j>=0; j--)
        {
            int ans = 0;
            if(a[i] == b[j]) ans = 1 + dp[i+1][j+1];

            else ans = max(dp[i+1][j], dp[i][j+1]);
            dp[i][j] = ans;
        }
    }
    return dp[0][0];
}

int longestCommonSubsequence(string text1, string text2) {
    return tabulation(text1, text2);
}

// space optimized
int longestCommonSubsequence(string a, string b) {

    vector<int> curr(b.length()+1,0);
    vector<int> next(b.length()+1,0);
    
    for(int i=a.length()-1; i>=0; i--)
    {
        for(int j=b.length()-1; j>=0; j--)
        {
            int ans = 0;
            if(a[i] == b[j]) ans = 1 + next[j+1];

            else ans = max(next[j], curr[j+1]);
            curr[j] = ans;
        }
        next = curr;
    }
    return next[0];
}