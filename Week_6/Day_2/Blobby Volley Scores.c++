#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--){
        int sz , a = 0 , b  = 0;
        string s;
        bool ok = true;
        cin >> sz >> s;
        for(int i = 0 ; i < sz ; i++)
            if(s[i] == 'A' && ok) a++;
            else if(s[i] == 'B' && ok) ok = false;
            else if(s[i] == 'B' && !ok) b++;
            else ok = true;
        cout << a <<" "<<b<<"\n";
    }
    return 0 ;
}