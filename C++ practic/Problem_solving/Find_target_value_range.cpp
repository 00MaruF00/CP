#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz,target;
    cin>>sz>>target;
    vector<int>ar(sz);
    for(int i =0;i<sz;i++)
        cin>>ar[i];
    int fast = -1;
    int lft = 0,rgt = sz-1,mid;
    while(lft!=rgt)
    {
        mid = lft + (rgt-lft)/2;
        if(ar[mid]>target)
            rgt = mid-1;
        else if(ar[mid]<target)
            lft = lft +1;
        else
        {
            rgt = mid;
            fast = rgt;
        }
    }
    cout<<fast<<"\n";
    lft =0;
    rgt = sz-1;
    int last = -1;

    while(lft != rgt)
    {
        mid = lft + (rgt-lft)/2;
        if(ar[mid]>target)
            rgt = mid-1;
        else if(ar[mid]<target)
            lft = mid +1;
        else
        {
            lft = mid;
            last = lft;
            if(ar[rgt] == target)
            {
                last = target;
                break;
            }
            else
                rgt--;
        }
    }
    cout<<last<<"\n";
    return 0;
}
