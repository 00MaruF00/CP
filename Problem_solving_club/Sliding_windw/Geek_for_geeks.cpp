// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int sz ; 
    cin >> sz ;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    int k;
    cin >> k;
    queue<int>q;
    int f = 0 , l = 0 ;
    while(l < sz){
        if(ar[l] < 0) q.push(ar[l]);
        l++;
        if(l < k ) continue;
        if(q.empty()) cout << 0 <<" ";
        else cout << q.front() <<" ";
        if(ar[f] < 0)q.pop();
        f++;
    }
    cout << "\n";
    return 0 ;
}