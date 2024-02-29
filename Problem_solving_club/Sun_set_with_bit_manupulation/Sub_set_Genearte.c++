#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin >> sz;
    int ar[sz];
    vector<vector<int>>v;
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    for(int i = 0 ; i < (1 << sz) ; i++){
        vector<int>arr;
        for(int j = 0 ; j < sz ; j++){
            int a = (1 << j);
            if(a&i)arr.push_back(ar[j]);
        }
        v.push_back(arr);
    }
    for(auto iter : v){
        for(auto it : iter) cout << it <<" ";
        cout << "\n";
    }
    return 0 ;
}