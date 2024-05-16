#include<bits/stdc++.h>
using namespace std;

void dfs(int node,unordered_map<int,bool> &visited,
          unordered_map<int,set<int>> &adj, vector<int> &component)
{
    // ans store
    component.push_back(node);
    // mark visited
    visited[node] = true;

    // recurssive call for every connected node depth me jaana hai
    for(auto i:adj[node])
        if(!visited[i])
            dfs(i, visited, adj, component);
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // prepare adj list
    unordered_map<int,set<int>>  adj;
    for(auto i:edges)
    {
        adj[i[0]].insert(i[1]);
        adj[i[1]].insert(i[0]);
    }

    vector<vector<int>> ans;
    unordered_map<int,bool> visited;

    for(int i=0; i<V; i++)
    {
        if(!visited[i])
        {
            vector<int> component; 
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }
    return ans;
}