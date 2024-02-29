#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n , sum = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        sum += a;
    }
    if(sum == n)cout << 0 <<"\n";
    else if(sum < n)cout << 1 <<"\n";
    else cout << sum - n<<"\n";
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