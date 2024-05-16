//Shortest path in an unweighted graph // coding ninja medium level

#include<unordered_map>
#include<queue>
#include<list>
#include<vector>
using namespace std;
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	//create adjacency list
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++)
	{
		int u = edges[i].first;
		int v = edges[i].second;

		adj[u].push_back(v); //undirected hai  
		adj[v].push_back(u);
	}

	// do bfs
	unordered_map<int, bool> visited;
	unordered_map<int, int> parent;
	queue<int> q;
	q.push(s); // source ko queue me daal do
	parent[s] = -1;
	visited[s] = 1;

	while(!q.empty())
	{
		int front = q.front();
		q.pop();
		for(auto i:adj[front])
		{
			if(!visited[i])
			{
				visited[i] = 1;
				parent[i] = front;
				q.push(i);
			}
		}
	}
	
	// prepare shortest path
	vector<int> ans;
	int currentNode = t; // t humara destination node hai
	ans.push_back(t);

	while(currentNode != s)
	{
		currentNode = parent[currentNode];
		ans.push_back(currentNode);
	}
	reverse(ans.begin(),ans.end());
	return ans;
}





