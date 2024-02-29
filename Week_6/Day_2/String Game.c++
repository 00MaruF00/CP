#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n , counter = 0;
    cin >> n;
    stack<char>st;
    for(int i = 0 ; i < n  ; i++){
        char ch ;
        cin >> ch;
        if(st.empty())st.push(ch);
        else if(st.top() != ch) counter++ , st.pop();
        else st.push(ch);
    }
    if(counter&1) cout << "Zlatan\n";
    else cout << "Ramos\n";
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