#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Prime factorization .
    map<int , int>seive;
    // Max N input is 1e9
    ll n , queary;
    cin >> n >> queary;
    for(int i = 2 ; i*i <= n ; i++)
        if(!seive[i])
            for(int j = i*i ; j <= n ; j += i)
                if(!seive[j])
                    seive[j] = i;
    while(queary--){
        int n;
        cin >> n;
        if(!seive[n]) cout << n <<"\n";
        else{
            while(n != 1){
                if(!seive[n]){
                    cout << n <<" ";
                    n = 1;
                }
                else {
                    cout << seive[n] <<" ";
                    n /= seive[n];
                }
            }
            cout << "\n";
        }
    }
    return 0 ;
}