#include<bits/stdc++.h>
using namespace std;

const int sz = 2e5;
vector<int>graph[sz];
vector<bool>visited(sz,true);

void dfs(int node)
{
    visited[node] = false;
    for(int iter : graph[node]){
        if(visited[iter]) 
            dfs(iter);
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    for(int i =0;i<edge;i++){
        int a,b;
        cin>> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int ans = 0;
    for(int  i = 1; i <= node ; i++){
        if(visited[i]){
            ans++;
            dfs(i);
        }
    }
    cout<<ans<<'\n';
    return 0;
}