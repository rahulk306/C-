// code studio medium level problem //prim's mst

#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // create adj list
    unordered_map<int, list<pair<int,int>>> adj;
    for(int i=0; i<g.size(); i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    }

    // create three containers  here we are following 1-based indexing
    vector<int> key(n+1); // stores the min possible weight
    vector<bool> mst(n+1); // to check the visited nodes
    vector<int> parent(n+1); // to note the parent of the node selected

    for(int i=0; i<=n; i++)
    {
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }  

    // let's start the main algo
    // here source is the first node i.e., 1
    key[1] = 0; 
    parent[1] = -1;
    
    for(int i=1; i<=n; i++)
    {
        int mini = INT_MAX;
        int u; 

        for(int v=1; v<=n; v++)
        {
            if(mst[v] == false && key[v] < mini)
            {
                u = v;
                mini = key[v];
            }
        }
        // mark min node as true in the mst
        mst[u] = true;

        // check it's adjacent nodes
        for(auto it: adj[u])
        {
            int v = it.first;
            int w = it.second;

            if(mst[v] == false && w < key[v])
            {
                parent[v] = u;
                key[v] = w;
            }
        }
    }// itne me parent array ready ho gya hoga

    vector<pair<pair<int,int>, int>> result;
    for(int i=2; i<=n; i++) // 1-based indexing hai aur 1st node source hai mtlb par[1] = -1
    {
      result.push_back({{parent[i], i}, key[i]});
    }
    return result;


}
