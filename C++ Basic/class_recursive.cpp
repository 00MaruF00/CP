
// Recursive Class e obossoy obossoy pointer use korte hobbe . Karon class er recursion all time object er pointer ecive kore thake..
#include <bits/stdc++.h>
using namespace std;

class personal
{
public:
    string name;
    int age;
    personal *father, *mother;

    void input()
    {
        cin>>name>>age>>father->name>>father->age>>mother->name>>mother->age;
    }

    void output()
    {
        cout<<name<<" "<<age<<endl;
        cout<<father->name<<" "<<father->age<<endl;
        cout<<mother->name<<" "<<mother->age<<endl;
    }
};

int main()
{
    personal P;
    P.father = new personal;
    P.mother = new personal;

    P.input();
    P.output();

    return 0;
}
