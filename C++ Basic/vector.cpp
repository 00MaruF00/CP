#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Use of push back .
    vector<int>ara;
    ara.push_back(1);
    cout<<ara[0]<<"\n";

    // vector act as array .
    vector<int>ara_1;
    int a;
    for(int i =0;i<5;i++)
    {
        cin>>a;
        ara_1.push_back(a);
    }
    for(int i =0;i<5;i++)
        cout<<ara_1[i]<<" ";
    cout<<endl;
    ara_1.pop_back();
    for(int i =0;i<5;i++)
        cout<<ara_1[i]<<" ";
    cout<<endl;

    return 0;
}
