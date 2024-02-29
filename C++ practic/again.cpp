#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz , sum , flag = 0;
        cin >> sz >> sum;
        int ar[sz];
        for(int i = 0 ; i < sz ; i++) cin >> ar[i];
        for(int i = 0 ; i < sz ; i++){
            for(int j = 0; j < sz ; j++){
                for(int k = 0; k < sz ; k++){
                    if(i!=j&&j!=k&&k!=i){
                        if(ar[i]+ar[j]+ar[k] == sum)flag = 1;
                    }
                    if(flag)break;
                }
                if(flag)break;
            }
            if(flag)break;
        }
        if(flag)cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}