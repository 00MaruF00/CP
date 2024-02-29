#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n , a , b , mid;
    cin >> n >> a >> b;
    mid = n/2;
    if(a <= mid && b <= mid)cout << -1 ;
    else if(a > mid && b > mid)cout << -1 ;
    else if(a + mid > n + 1 || b - mid < 0)cout << -1;
    else {
        cout << a<<" ";
        for(int i = n ; i > mid ; i--)
            if(i != a && i != b)cout << i <<" ";
        cout << b <<" ";
        for(int i = 1 ; i <= mid ; i++)
            if(i != a && i != b)cout << i << " ";
    }
    cout << "\n";
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