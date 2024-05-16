#include<unordered_map>
#include<list> 
#include<queue>
using namespace std;

bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
	// create adj list
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++)
	{
		int u = edges[i][0];
		int x = edges[i][1];
		adj[u].push_back(x);
	}

	// find all indegrees
	vector<int> indegree(v);
	for(auto i:adj)
		for(auto j:i.second)
			indegree[j]++;

	// 0 indegree walo ko queue me daal do
	queue<int> q;
	for(int i=0; i<v; i++)
		if(indegree[i] == 0)
			q.push(i);

	// do bfs
	int cnt = 0;
	while(!q.empty())
	{
		int front = q.front();
		q.pop();

		// increase cnt
		cnt++;

		// neighbour indegree update kr do
		for(auto neighbour:adj[front])
		{
			indegree[neighbour]--;
			if(indegree[neighbour] == 0)
				q.push(neighbour);
		}
	}
	if(cnt == v) return false;
	else return true;

}
