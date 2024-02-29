#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = -1;
    for (int i = 0 ; i < s.size() ; i++){
        if(s[i] >= '5'){
            n = i;
            break;
        }
    }
    if(n == -1)cout << s <<"\n";
    else {
        int idx = -1;
        for(int i = n ; i >= 0 ; i--){
            if(s[i] < '4'){
                idx = i ;
                break;
            }
        }
        if(idx == -1){
            cout << 1 ;
            for(int i = 0 ; i < s.size() ; i++)cout << 0;
            cout << "\n";
        }
        else {
            for(int i = 0 ; i < s.size() ; i++){
                if(i == idx)s[i]++;
                if(i > idx)cout << 0;
                else cout << s[i];
            }
            cout <<"\n";
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while(test--)
        solve();
    return 0;
}