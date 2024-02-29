#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string>Q;
    Q.push("1");

    int n;
    cin>>n;

    for(int i =1;i<n+1;i++)
    {
        cout<<i<<"->"<<Q.front()<<"\n";
        string s1,s2;
        s1 = Q.front()+"0";
        s2 = Q.front()+"1";
        Q.pop();
        Q.push(s1);
        Q.push(s2);
    }

    return 0;
}
