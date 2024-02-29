#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n , k;
    cin >> n >> k;
    int f = 1 , l = n;
    while(f<=l){
        if(l==f){
            cout << l <<" ";
            break;
        }
        cout << l-- <<" ";
        if(l==f){
            cout << l <<" ";
            break;
        }
        cout << f++ <<" ";
    }
    cout << "\n";
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