#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s , s1 ,s2;
        cin >> s;
        s1 = s.substr(0 , s.size()/2);
        s2 = s.substr(s.size()/2 , s.size());
        if(s1 == s2)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}