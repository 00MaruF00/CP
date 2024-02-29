#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , counter = 0;
    cin >> sz ;
    for(int i = 1 ; i <= sz ; i++){
        int a;
        cin >> a;
        if(a == i)counter++;
    }
    int m = ceil(counter/2.0);
    cout << m <<"\n";
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