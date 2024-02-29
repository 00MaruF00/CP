#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int sz;
    cin >> sz;
    map<int , bool>ar;
    for(int i =0;i<sz;i++){
        int x, y;
        cin >> x >> y;
        ar[x] = true;
        ar[y] = false;
    }
    int mx = 0 , counter = 0;
    for(auto iter : ar){
        if(iter.second) counter++;
        else counter--;
        mx = max(mx , counter);
    }
    cout<<mx<<'\n';
    return 0;
}