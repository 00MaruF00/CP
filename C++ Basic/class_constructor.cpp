
// Have a problem .
#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    string status;
    int roll;
    string father_name;
    string mother_name;

    student(string nm,string sts,int rl,string f_name,string m_name)
    {
        name = nm;
        status = sts;
        roll = rl;
        father_name =f_name;
        mother_name = m_name;
    }
    student(string nm,string sts,int rl)
    {
        name = nm;
        status = sts;
        roll = rl;
    }
    student(string nm,string father_name)
    {
        name = nm;
        this->father_name = father_name;
    }

    void output()
    {
        cout<<name<<" "<<status<<" "<<roll<<" "<<father_name<<" "<<mother_name<<"\n";
    }
};

int main()
{


    student s_1("Maruf","Student",17,"X","Y");
    s_1.output();
    student y("Maruf" ,"Student" , 20);
    y.output();
    student x_1("Maruf","X");
    x_1.output();


    return 0;
}
