#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a , b , mn ;
    cin >> a >> b;
    for(int i = 2 ; i <= a ; i++)if(a%i == 0){
        mn = i;
        break;
    }
    cout << ceil((b - a - mn)/2.0) + 1 <<"\n";
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