#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1<<30;
ll dp[1000001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*
        counting divisor 1 to n 
        I am taking increasing the multiplayer of j .
    */
    for(int i = 1; i <= 1000001 ; i++)
        for(int j = i ; j <= 1000001 ; j += i)
            dp[j]++;
    int a , b , c , ans = 0;
    cin >> a >> b >> c ;
    for(int i = 1 ; i <= a ; i++)
        for(int j = 1; j <= b ; j++)
            for(int k = 1 ; k <= c ; k++)
                ans = (ans + dp[i * j * k]) % mod;
    cout << ans <<'\n';
    return 0 ;
}