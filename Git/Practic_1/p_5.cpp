#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz_1;
    cin>>sz_1;
    vector<int>ar_1(sz_1);

    for(int i =0;i<sz_1;i++)
        cin>>ar_1[i];

    int sz_2;
    cin>>sz_2;
    vector<int>ar_2(sz_2);

    for(int i =0;i<sz_2;i++)
        cin>>ar_2[i];

    int sz_3 = sz_1 + sz_2;
    vector<int>ar(sz_3);

    int i ,j;
    for(i =0;i<sz_1;i++)
        ar[i] = ar_1[i];
    for(j =0;j<sz_2;j++)
    {
        ar[i] = ar_2[j];
        i++;
    }

    sort(ar.begin(),ar.end());

    cout<<ar[0]<<" ";
    for(i =1;i<sz_3;i++)
    {
        if(ar[i] != ar[i-1])
            cout<<ar[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
