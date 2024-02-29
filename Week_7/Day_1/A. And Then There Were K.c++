#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n , counter = 0 , a = 1;
    cin >> n;
    while(n >= a)
        a = 1 << counter, counter++;
    counter -=2;
    cout <<(1<<counter) - 1 <<"\n";
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