#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    person *father, *mother;

    person(string n,string f_n,string m_n)
    {
        this->name = n;
        father = new person;
        father->name = f_n;
        mother = new person;
        mother->name = m_n;
    }
};

int main()
{

    return 0;
}
