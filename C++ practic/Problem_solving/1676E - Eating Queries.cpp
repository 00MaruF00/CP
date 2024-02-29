// Here I have used lower_bound function 1st time .
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int sz, queary;
    cin >> sz >> queary;
    vector<int> v(sz);
    priority_queue<int> p;
    for (int i = 0; i < sz; i++)
    {
        int a;
        cin >> a;
        p.push(a);
    }

    for (int i = 0; i < sz; i++)
    {
        if (i == 0)
        {
            v[i] = p.top();
            p.pop();
            continue;
        }
        v[i] = v[i - 1] + p.top();
        p.pop();
    }

    for (int i = 0; i < queary; i++)
    {
        int a;
        cin >> a;
        auto iter = lower_bound(v.begin(),v.end(),a);
        if(iter != v.end())
            cout<<iter - v.begin()+1<<"\n";
        else
            cout<<-1<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();

    return 0;
}
