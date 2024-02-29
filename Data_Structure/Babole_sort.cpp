#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sizee;
    cin>>sizee;
    vector<int>arr(sizee);

    for(int i =0;i<sizee;i++)
        cin>>arr[i];

    for(int i =0;i<sizee-1;i++)
    {
        bool swape = true;
        for(int j = 0;j<sizee-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swape = false;
            }
        }
        if(swape)
            break;
    }

    cout<<"Sorted : "<<"\n";
    for(int i =0;i<sizee;i++)
        cout<<arr[i]<<" ";

    return 0;
}
