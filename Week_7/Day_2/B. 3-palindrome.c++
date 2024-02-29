#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int sz;
    cin >>sz;
    string s = "abba";
    cout << "a";
    for(int i = 0 ; i < sz - 1; i++)
        cout << s[i%4];
    cout <<"\n";
}

int main(){
    solve();
}