#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int>tree[300001];
bool visited[300001];
int leaf_node[300001];

void leaf_node_count_dfs(int node)
{
    visited[node] = false;
    bool leaf = true;
    for(int adj : tree[node]){
        if(visited[adj]){
            leaf = false;
            leaf_node_count_dfs(adj);
            leaf_node[node] += leaf_node[adj];
        }
    }
    if(leaf) {
        leaf_node[node] = 1;
        return ;
    }
    return;
}

void solve()
{
    int node;
    cin >> node ;
    memset(visited , true , sizeof(visited));
    memset(leaf_node , 0 , sizeof(leaf_node));
    for(int i = 1 ; i < node ; i++){
        int a , b;
        cin >> a >> b;
        tree[a].emplace_back(b);
        tree[b].emplace_back(a);
    }
    leaf_node_count_dfs(1);
    for(int i = 1 ; i <= node ; i++) cout << leaf_node[i] <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--)
        solve();
    return 0 ;
}