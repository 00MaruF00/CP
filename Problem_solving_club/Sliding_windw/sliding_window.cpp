/*
You are given an array and given a lenth ->
    task -> find the maximum summation in given lenght in the sequence . 
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz , k , sum = 0 , mx = -1;
    cin >> sz ;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    cin >> k;
    int f = 0 , l = 0;
    while(l < sz){
        sum += ar[l];
        if(l < k - 1) {
            l++;
            continue;
        }
        mx = max(sum , mx);
        sum -= ar[f];
        f++; l++;
    }
    cout << mx <<'\n';
    return 0 ;
}