#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    set<int>st;
    int sz , r = 1 , l = 1 , counter = 0;
    cin >> sz;
    vector<int>ar;
    for(int i = 0 ; i < sz ; i++){
        int a;
        cin >> a;
        if(ar.empty())ar.push_back(a);
        else if(ar.back() != a)ar.push_back(a);
    }
    for(int i = 1 ; i < ar.size() ; i++){
        if(ar[i - 1] < ar[i])l++;
        else counter += max(l - 2 , 0) , l = 1;
        if(ar[i - 1] > ar[i])r++;
        else counter += max(r - 2 , 0) , r = 1;
    }
    counter += max(0 , l - 2) + max(0 , r - 2);
    cout << ar.size() - counter <<"\n";
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