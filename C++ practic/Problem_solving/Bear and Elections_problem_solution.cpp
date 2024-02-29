#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>ara;
    ara.resize(n);

    for(int i = 0; i<n;i++)
        cin>>ara[i];
    int count =0;
    while(true)
    {
        int maxx = -1,index;
        for(int i =1;i<n;i++)
        {
            if(maxx<ara[i])
            {
                maxx = ara[i];
                index = i;
            }
        }
        if(maxx<ara[0])
            break;
        else
        {
            ara[0]++;
            ara[index]--;
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}