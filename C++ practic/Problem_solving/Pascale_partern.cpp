#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    for(int i = 1;i<a*2;i++)
    {
        int k = 0;
        if(i<=a)
        {
            for(int j = i;j<a;j++)
                cout<<" ";
            for(int j =0;j<2*i-1;j++)
            {
                if(j<i)
                {
                    k++;
                    cout<<setprecision(20)<<k;

                }
                else
                {
                    k--;
                    cout<<setprecision(20)<<k;
                }
            }
            printf("\n");
        }
        else
        {
            for(int j = a;j<i;j++)
                cout<<" ";
            for(int j =0;j<2*(2*a-i)-1;j++)
            {
                if(j<2*a-i)
                {
                    k++;
                    cout<<setprecision(20)<<k;
                }
                else
                {
                    k--;
                    cout<<setp<<k;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}

