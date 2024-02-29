#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s_1;
    cin>>s_1;
    vector<int>ar_1(s_1);
    for(int i =0 ;i<s_1;i++)
        cin>>ar_1[i];
    int s_2;
    cin>>s_2;
    vector<int>ar_2(s_2);
    for(int i =0 ;i<s_2;i++)
        cin>>ar_2[i];

    for(int i =0;i<s_1;i++)
    {
        for(int j =0;j<s_2;j++)
        {
            if(ar_1[i] == ar_2[j] && ar_1[i]>0 && ar_2[j]>0)
            {
                cout<<ar_1[i]<<" ";
                ar_1[i] = -1;ar_2[j] = -1;
            }
        }
    }
    cout<<"\n";
    return 0;
}
