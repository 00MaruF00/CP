#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n ;
    cin >> n;
    n = n*n;
    int od = 1 , evn = 2;
    for(int i = 0 ; i*i < n ; i++){
        for(int j = 0 ; j*j < n ; j++){
            if(od <= n){
                cout << od<<" ";
                od += 2;
            }
            else{
                cout << evn <<" ";
                evn += 2;
            }
        }
        cout << "\n";
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