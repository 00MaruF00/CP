#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << "\n";
        return;
    }
    if(n&1)cout << -1;
    else {
        int j = 1;
        for(int i = n ; i>=1 ; i--)
            if(i&1){
                cout << j <<" ";
                j += 2;
            }
            else cout << i <<" ";
    }
    cout <<"\n";
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