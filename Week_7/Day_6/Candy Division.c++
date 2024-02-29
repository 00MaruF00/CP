#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--)
    {
        int a ;
        cin >> a;
        if(a%3)cout << "NO\n";
        else cout <<"YES\n";
    }
    return 0 ;
}