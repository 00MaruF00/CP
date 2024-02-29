#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mul = 1,a,i,n;
    cin>>n;
    for(i =0;i<n;i++)
    {
        cin>>a;
        if(i%2 != 0)
            mul *=a;
    }
    cout<<mul<<"\n";

    return 0;
}
