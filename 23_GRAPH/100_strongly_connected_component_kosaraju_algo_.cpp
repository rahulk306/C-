// code studio hard level problem
// strongle connected component

#include<unordered_map>
#include<list>
#include<stack>
void dfs(int node,unordered_map<int, bool> &vis, stack<int> &st, 
         unordered_map<int, list<int>> &adj)
{
	vis[node] = 1;
	for(auto nbr: adj[node])
	{
		if(!vis[nbr]) dfs(nbr, vis, st, adj);
	}
	st.push(node);
}

void ReDfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj)
{
	vis[node] = 1;

	for(auto nbr: adj[node])
	{
		if(!vis[nbr]) ReDfs(nbr, vis, adj);
	}
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// adj 
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++)
	{
		int u = edges[i][0];
		int v = edges[i][1];

		adj[u].push_back(v); // directed edge hai
	}

	//step 1 : topological sort for ordering of nodes
	stack<int> st;
	unordered_map<int, bool> vis;
	for(int i=0; i<v; i++)
	{
		if(!vis[i])
			dfs(i, vis, st, adj);
	}

	// step 2 : create a transpose graph
	unordered_map<int, list<int>> transpose;
	for(int i=0; i<v; i++)
	{
		vis[i] = 0;
		for(auto nbr: adj[i])
			transpose[nbr].push_back(i);
	}

	// step 3 : dfs call seeing above ordering
	int count = 0;
	while(!st.empty())
	{
		int top = st.top();
		st.pop();
		if(!vis[top])
		{
			count++;
			ReDfs(top, vis, transpose);
		}
	}
	return count;
}