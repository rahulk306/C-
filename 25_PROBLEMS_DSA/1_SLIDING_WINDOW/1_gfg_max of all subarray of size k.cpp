#include<bits/stdc++.h>
using namespace std;

vector <int> max_of_subarrays(int *arr, int n, int k)
{
    deque<int> q; 
    vector<int> ans;
    
    // for the first window ( k elements )
    for(int i=0; i<k; i++)  
    {
        while( !q.empty() && arr[q.back()] < arr[i] ) q.pop_back();
        
        q.push_back(i);
    }
    ans.push_back( arr[q.front()] );
    
    // for the rest of the window 
    
    for(int i=k; i<n; i++)
    {
        if( q.front() == i-k) q.pop_front(); // window se bahar wle ko pop kr do
        
        while( !q.empty() && arr[q.back()] < arr[i] ) q.pop_back(); // max wle ko rkho
        
        q.push_back(i);
        
        ans.push_back( arr[q.front()] );
    }
    return ans;

}