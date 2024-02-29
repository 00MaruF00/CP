
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz,item;
    cin>>sz>>item;
    vector<int>ar(sz);

    for(int i =0;i<sz;i++)
        cin>>ar[i];

    int left = 0,right = sz-1,middle;
    bool m = true;
    while(left<=right)
    {
        middle = (left + right)/2;

        if(ar[middle] == item)
        {
            cout<<"Item found ."<<"\n"<<"Index = "<<middle<<"\n";
            m = false;break;
        }
        else if(ar[middle]<item)
            left = middle +1;
        else if(ar[middle]>item)
            right = middle -1;
    }
    if(m)
        cout<<"Item not found ."<<"\n";

    return 0;
}
