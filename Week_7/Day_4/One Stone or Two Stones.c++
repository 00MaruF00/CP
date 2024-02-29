#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , b;
    cin >> a >> b;
    if(a - b > 1)cout << "CHEF\n";
    else if(abs(a - b) <= 1 && (min(a , b)&1)) cout << "CHEF\n";
    else if(abs(a - b) <= 1 && ((min(a , b)&1) == 0)) cout << "CHEFINA\n";
    else cout << "CHEFINA\n";
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