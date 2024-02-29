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
        int n , od = 0;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            if(a&1)od++;
        }
        if(od&1)cout << "NO\n";
        else cout << "YES\n";
    }
    return 0 ;
}