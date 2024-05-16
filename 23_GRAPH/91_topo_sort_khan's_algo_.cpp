// topological sorting using khan's algorithm
// tc -> O(v+e)
// sc -> O(v+e) i.e., linear both tc ans sc

#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<int> indegree(v);
	    
	    for(int i=0; i<v; i++)
	        for(int j=0; j<adj[i].size(); j++)
	            indegree[adj[i][j]]++;        
	    
	    // o indegree walo ko push kardo queue me
	    queue<int> q;
	    for(int i=0; i<v; i++)
	        if(indegree[i] == 0)
	            q.push(i);
	    
	    // do bfs
	    vector<int> ans;
	    while(!q.empty())
	    {
	        int front = q.front();
	        q.pop();
	        
	        // ans store
	        ans.push_back(front);
	        
	        //neighbour indegree undate
	        for(auto neighbour: adj[front])
	        {
	            indegree[neighbour]--;
	            if(indegree[neighbour] == 0)
	                q.push(neighbour);
	        }
	    }
	    return ans;