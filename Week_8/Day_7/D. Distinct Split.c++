#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , ans = 0;
    string s;
    bool ok = true;
    cin >>sz;;
    set<char>st1, st2;
    unordered_map<char , int>mp;
    for(int i = 0 ; i < sz ; i++){
        char ch;
        cin >> ch;
        st1.insert(ch) ;
        s += ch;
        mp[ch]++;
    }
    for(int i = 0 ; i < sz ; i++){
        mp[s[i]]--;
        if(!mp[s[i]])
            st1.erase(s[i]);
        st2.insert(s[i]);
        ans = max(ans , (int)st1.size() + (int)st2.size());
    }
    cout << ans <<'\n';
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