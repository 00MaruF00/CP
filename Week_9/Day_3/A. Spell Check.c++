#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz ; cin >> sz;
    string s , s1 = "Timur";
    cin >> s;
    if(s.size() > s1.size()){
        cout << "NO\n";
        return ;
    }
    sort(s.begin() , s.end());
    do{
        if(s1 == s){
            cout << "YES\n";
            return ;
        }
    }
    while(next_permutation(s.begin() , s.end()));
    cout << "NO\n";
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
