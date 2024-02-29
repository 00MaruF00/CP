#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long sz , sum1 = 0 , sum2 = 0 , ans = 0 , l = 0 ;
    cin >> sz;
    long long ar[sz] , r = sz - 1;
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    while(l <= r){
        if(sum1 == sum2)ans = sum1 , sum1 += ar[l] , l++;
        else if(sum1 > sum2) sum2 += ar[r] , r--;
        else if(sum2 > sum1) sum1 += ar[l] , l++;
    }
    if(sum1 == sum2)ans = sum1;
    cout << ans <<"\n";
    return 0;
}