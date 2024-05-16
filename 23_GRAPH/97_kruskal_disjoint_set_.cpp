// coding ninja medium level problem
// minimum spanning tree

#include<bits/stdc++.h>
// edges wle data structure ko weight ke basis pr sort krne ke leye comparator bnaye hai
bool cmp(vector<int> &a, vector<int> &b)
{
    return a[2] < b[2];
}

// disjoint set and path compression code starts
void makeSet(vector<int> &parent, vector<int> &rank, int n)
{
    for(int i=0; i<n; i++)
    {
        parent[i] = i; // start me hr node khud ka parnet hai
        rank[i] = 0; // start me sbka rank 0 hai
    }
}

int findParent(vector<int> &parent, int node)
{
    if(parent[node] == node) return node; // ultimate baap mil jye to return kr dena
    return parent[node] = findParent(parent, parent[node]); // yha path compression bhi hogya
}

void unionSet(int u, int v, vector<int> &parent, vector<int> &rank)
{
    u = findParent(parent, u);
    v = findParent(parent, v);

    if(rank[u] < rank[v])   parent[u] = v;

    else if(rank[u] > rank[v]) parent[v] = u;

    else // jb dono ka rank same ho to kisi ko baap bna ke uska rank++ krdo
    {
        parent[v] = u; 
        rank[u]++;
    }
}
// disjoint set and path compression code ends

int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
    sort(edges.begin(), edges.end(), cmp);

    vector<int> parent(n);
    vector<int> rank(n);
    makeSet(parent, rank, n); 

    int minWeight = 0;

    for(int i=0; i<edges.size(); i++)
    {
        int u = findParent(parent, edges[i][0]);
        int v = findParent(parent, edges[i][1]);
        int wt = edges[i][2];

        if(u != v)
        {
            minWeight += wt;
            unionSet(u, v, parent, rank
            );
        }
    } 
    return minWeight;  
}