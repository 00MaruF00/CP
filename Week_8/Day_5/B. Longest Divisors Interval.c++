#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long  n , i;
    cin >> n;
    for(i = 1 ; ; i++)if(n%i!=0)break;
    cout << --i <<'\n';
}

int main()
{
    int test;
    cin >> test;
    while(test--)
        solve();
    return 0;
}