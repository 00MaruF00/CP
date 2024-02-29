#include<bits/stdc++.h>
using namespace std;

const int sz = 2e5;
vector<int>graph[sz];
vector<bool>visited(sz,true);
vector<int>level(sz);
int mx = 0;

void bfs(int node)
{
    queue<int>q;
    q.push(node);
    visited[node] = false;
    level[node] = 0;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int iter : graph[x]){
            if(visited[iter]){
                level[iter] = level[x] + 1;
                mx = max(mx,level[iter]);
                visited[iter] = false;
                q.push(iter);
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    for(int i =0;i<edge;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int src;
    cin >> src;
    bfs(src);
    cout<<mx<<'\n';
    return 0;
}