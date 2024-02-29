#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int m = ceil(n/2.0);
    cout << m <<"\n";
    int f = 1 , l = 3*n;
    while(m--){
        cout << f <<" "<<l <<"\n";
        f += 3 , l -= 3;
    }
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