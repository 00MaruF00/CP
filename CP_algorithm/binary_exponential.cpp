#include<bits/stdc++.h>
using namespace std;

int solve(int b , int p)
{
    if(!p) return 1;
    int res = solve(b,p >> 1);
    if(p & 1) return res * res * b;
    else return res * res;
}

int main()
{
    int base , power ;
    cin >> base >> power;
    int ans ;
    ans = solve(base , power);
    cout << ans <<'\n';
    return 0;
}