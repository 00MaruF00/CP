#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    double weight;
    int roll;

    void input()
    {
        cout<<"Enter Name : ";
        cin >> name ;
        cout<<"Enter Weight : ";
        cin>>weight;
        cout<<"Enter Roll : ";
        cin>>roll;
    }
    void output()
    {
        cout << name <<" "<< weight<<" " << roll<<"\n";
    }
};

int main()
{
    student s;

    s.input();
    s.output();

    return 0;
}
