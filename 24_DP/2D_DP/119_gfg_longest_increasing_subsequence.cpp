#include<bits/stdc++.h>
using namespace std;


int recursion(int n, int a[], int curr, int prev)
{
    // base case
    if(curr == n) return 0;
    
    // include
    int take = 0;
    if(prev == -1 || a[curr] > a[prev])         // -1 for starting case and other for increasing condition
        take = 1 + recursion(n, a, curr+1, curr);   // if we include then the curr will become prev for next iteration
    
    // exclude
    int notTake = 0 + recursion(n, a, curr+1, prev); 
    
    return max(take, notTake);
}

int longestSubsequence(int n, int a[])
{
    return recursion(n, a, 0, -1);
}