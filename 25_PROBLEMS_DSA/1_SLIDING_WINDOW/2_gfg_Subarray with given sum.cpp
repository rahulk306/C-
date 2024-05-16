#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>arr, int n, long long s)
{
    if(s==0) return {-1};
    
    int start=0, end=0;
    
    long long sum = arr[0];
    
    
    while(sum != s and end<n)
    {
        if(sum<s)
        {
            end++;
            sum += arr[end];
        }
        else if(sum>s)
        {
            sum -= arr[start];
            start++;
        }
        
    }
    if (sum == s) return {start+1, end+1};
    return {-1};
}