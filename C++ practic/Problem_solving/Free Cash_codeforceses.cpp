
#include<bits/stdc++.h>
using namespace std;

class point{
public:
    int x,y;
};

bool comp(point a,point b)
{
    if(a.x == b.x)
        return a.y<b.y;
    return a.x<b.x;
}

int main()
{
    int man;
    cin>>man;
    vector<point>arr;
    while(man--)
    {
        point v;
        cin>>v.x>>v.y;
        arr.push_back(v);
    }

    sort(arr.begin(),arr.end(),comp);

    int counter = 1,oj =0;
    for(int i =1;i<arr.size();i++)
    {
        if(arr[i-1].x == arr[i].x && arr[i-1].y == arr[i].y)
            counter++;
        else
        {
            if(oj < counter)
                oj = counter;
            counter = 1;
        }
    }
    if(counter>oj)
        cout<<counter<<"\n";
    else
        cout<<oj<<"\n";

    return 0;
}
