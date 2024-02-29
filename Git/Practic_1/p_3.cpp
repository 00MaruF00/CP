#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i = 0; i<s.size(); i++)
    {
        if(i%2 == 0)
        {
            if(s[i]>='a' && s[i]<'z')
            {
                s[i] = s[i]+1;
                cout<<s[i];
            }
            else
                cout<<'a';

        }
        else
            cout<<s[i];
    }
    cout<<"\n";

    return 0;
}
