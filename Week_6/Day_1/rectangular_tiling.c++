#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll w , l;
    cin >> w >> l;
    for(ll i = 1 ; i <= sqrt(w) ; i++){
        if(w%i == 0){
            if((2*i + 2*l)%4 != 0 || (2*(w/i) + 2*l)%4 != 0){
                cout << "YES\n";
                return;
            }
        }
    }
    for(ll i = 1 ; i <= sqrt(l) ; i++){
        if(l%i == 0){
            if((2*i + 2*w)%4 != 0 || (2*(l/i) + 2*w)%4 != 0){
                cout << "YES\n";
                return;
            }
        }
    }
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