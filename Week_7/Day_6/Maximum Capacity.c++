#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b;
        if(a < 9 && a*b <= 500)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0 ;
}