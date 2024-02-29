#include <bits/stdc++.h>

using namespace std;

int x = 10;

int math(int a, int b)
{
    return a * b;
}

namespace LED
{
    int x = 20;
    int math(int a, int b)
    {
        return a + b;
    }
}

int main()
{
    int a,b,c,d;

    cin>>a>>b;
    cout<<x<<endl;
    cout<<LED::x<<endl;
    c = LED::math(a,b);
    d = math(a,b);
    cout<<"Namespace :"<<c<<endl<<"Without namespace :"<<d<<endl;
    

    return 0;
}