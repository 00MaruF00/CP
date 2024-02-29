#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    person *father, *mother;

    person()
    {
        father = NULL;
        mother = NULL;
    }
    person(string n,string f_n,string m_n)
    {
        this->name = n;
        father = new person;
        father->name = f_n;
        mother = new person;
        mother->name = m_n;
    }
    void out_put()
    {
        cout<<name<<" "<<father->name<<" "<<mother->name<<" "<<"\n";
    }

    ~person()
    {
        cout<<"Called person"<<"\n";
        if(father != NULL)
            delete father;
        if(mother != NULL)
            delete mother;
    }
};

int main()
{
    person P("Maruf","X","Y");
    P.out_put();

    return 0;
}
