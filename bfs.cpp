#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> &graph, int start)
{
    int n = graph.size();
    vector<bool> visited(n, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty())
    {   
        int node = q.front();
        
        q.pop();
        cout << node<<'\n';
        for (int it : graph[node])

        {    
            if (!visited[it])
            {
                visited[it] = true;
               
                q.push(it);
            }
           
        }
    }
}
int main()
{
    vector<vector<int>> graph = {
       {1,3,4},{2,0},{1},{0},{0,5},{4}
    };
    int strtnd;
    cin>>strtnd;
    bfs(graph, strtnd);
}