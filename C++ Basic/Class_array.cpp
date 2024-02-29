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
    student s[2];

    for(int i =0;i<2;i++)
        s[i].input();
    for(int i =1;i>=0;i--)
        s[i].output();

    return 0;
}
