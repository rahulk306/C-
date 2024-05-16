#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
using namespace std;

bool checkDFS(int node, unordered_map<int,bool> &visited, 
              unordered_map<int,bool> &dfsvisited, unordered_map<int, list<int>> &adj)
{
  visited[node] = true;
  dfsvisited[node] = true;

  for(auto neighbour: adj[node])
  {
    if(!visited[neighbour])
    {
      bool cycleDetected = checkDFS(neighbour, visited, dfsvisited, adj);
      if(cycleDetected) return true;
    }
    else if(dfsvisited[neighbour]) return true;
  }
  // returning ke time dfsvisited[node] ko false kr do
  dfsvisited[node] = false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {

    // create adj list
    unordered_map<int, list<int>> adj;
    int size = edges.size();
    for(int i=0; i<size; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v); // directed graph hai re
    }

    // call dfs for all componects
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVisited;
    for(int i=0; i<size; i++)
    {
      if(!visited[i])
      {
         bool cyclefound = checkDFS(i, visited, dfsVisited, adj);
         if(cyclefound) return true; 
      }
    }
    return false;

}