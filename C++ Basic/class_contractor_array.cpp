
// Contructor er array banate hole ekta empty constractor banay rakhte hoy;
#include<bits/stdc++.h>
using namespace std;

class stu{
public:
    string name;
    int  roll;
    int age;

    stu()
    {

    }
    stu(string nm,int rl,int ag)
    {
        name = nm;
        roll = rl;
        age= ag;
    }
    void pnt()
    {
        cout<<name<<" "<<roll<<" "<<age<<"\n";
    }
};

int main()
{
    stu s[10];
    for(int i = 0;i<10;i++)
        s[i] = stu("A",i+1,20);
    for(int i = 0;i<10;i++)
        s[i].pnt();
    return 0;
}
