#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class graph
{
    public:
        unordered_map<int,list<int>> adj;
        unordered_map<int,bool> visited;
        queue<int> q;
        vector<int> ans;

        void addEdge(int u,int v,bool direction)
        {
            adj[u].push_back(v);
            if(direction==0)
                adj[v].push_back(u);
            
        }
        void printAdjList()
        {
            for(auto i:adj)
            {
                cout<<i.first<<" -> ";
                for(auto j:i.second)
                    cout<<j<<" , ";
                cout<<endl;
            }
        }
        void bfs(int source)
        {
            int node = source;
            q.push(node);
            visited[node] = 1; // marking the node visited

            while(!q.empty())
            {
                int frontnode = q.front();
                q.pop(); // removing the node and storing the node in the variable named forntnode.
                // now store the frontnode into the ans
                ans.push_back(frontnode);

                // traverse all neighbours of frontnode
                for(auto i: adj[frontnode]){
        
                    if(!visited[i]) // if the node is not visited we push the node into the queue.
                    {
                        q.push(i);
                        visited[i] = 1; // marking the node visited
                    }
                }
            }
        }
        void print_bfs()
        {
            for(auto i:ans)
                cout<<i<<" ";
            cout<<endl;
        }
};
int main()
{
    int n,m;
    cout<<"Enter the number of nodes and edges in the graph: "<<endl;
    cin>>n>>m;

    graph g;

    for(int i = 0 ;i<m ;i++)
    {
        int u,v;
        cout<<"Enter the "<<i+1<<" node edge pair :"<<endl;
        cin>>u>>v;
        g.addEdge(u,v,0); // undirected graph
    }
    g.printAdjList();

    cout<<"BFS TRAVERSAL of the graph: "<<endl;
    int source;
    cout<<"Enter the source from which you want to print bfs traversal of the graph: "<<endl;
    cin>>source;
    g.bfs(source);
    g.print_bfs();
    return 0;
}
