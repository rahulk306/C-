#include <bits/stdc++.h> 
using namespace std;

void toposort(int node, vector<bool> &vis, stack<int> &s,
              unordered_map<int,list<int>> &adj)
{
    vis[node] = true;

    for(auto neighbour: adj[node])
    {
        if(!vis[neighbour])
            toposort(neighbour, vis, s, adj);
    }
    // storing node in stack while returning 
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
    unordered_map<int, list<int>> adj; // creating adjency list

    for(int i=0; i<e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    vector<bool> visited(v); // creating visited map
    stack<int> s;

    for(int i=0; i<v; i++)
        if(!visited[i])
            toposort(i, visited, s, adj);
    
    vector<int> ans;
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;

}