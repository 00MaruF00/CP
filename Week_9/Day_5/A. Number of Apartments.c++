#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i <= (n/3 + 1) ; i++){
        for(int j = 0 ; j <= (n/3 + 1) ; j++){
            int x = n - i*3 - j*5;
            if(x%7 == 0 && x >= 0){
                cout << i <<" "<<j<<" "<<x/7<<"\n";
                return;
            }
        }
    }
    cout << -1 <<"\n";
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