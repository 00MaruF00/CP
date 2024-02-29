#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x = 35 ;
    for(int i = 0 ; i < x ; i++)
        printf("%6d%c", i , ((i%5 == 4) ? '\n' : 'a'));
    return 0 ;
}