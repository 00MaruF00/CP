#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    stack<char>st;
    for(auto iter : s){
        if(st.empty())st.push(iter);
        else if(st.top() == 'B' && iter == 'B')st.pop();
        else if(st.top() == 'A' && iter == 'B')st.pop();
        else st.push(iter);
    }
    cout << st.size() <<"\n";
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