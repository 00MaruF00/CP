#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    int x = log2(n)/log2(k); // log k base n ;
    cout << x + 1 <<"\n";
    return 0 ;
}