#include <bits/stdc++.h>
using namespace std;

class point
{
public:
    int x, y;
};

class point_o
{
public:
    double m, n;
};

class triangle
{
public:
    point a;
    point b;
    point c;

    void input()
    {
        cout << "Input a point of triangle : ";
        cin >> a.x >> a.y;
        cout << "Input b point of triangle : ";
        cin >> b.x >> b.y;
        cout << "Input c point of triangle : ";
        cin >> c.x >> c.y;
    }
};

class point_o midian_of_triangle(class triangle x)
{
    point_o ans;
    x.input();
    ans.m = (double)(x.a.x + x.b.x + x.c.x) / 3;
    ans.n = (double)(x.a.y + x.b.y + x.c.y)/3;

    return ans;
}

int main()
{
    triangle t;
    point_o p;
    p = midian_of_triangle(t);
    cout<<"("<<setprecision(2)<<fixed<<p.m<<" "<<setprecision(2)<<fixed<<p.n<<")"<<"\n";

    return 0;
}
