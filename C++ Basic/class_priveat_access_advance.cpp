
// contructer use kore jodi priveat er value public e set kori tahle input output ager motoi nite hobbe but main function e class variable name e j priveat variable gulo expect korbe segula Hudai bosai dite hobbe..
#include <bits/stdc++.h>
using namespace std;

class student_information
{
private:
    string name;
    string address;

public:
    void output()
    {
        cout<<name<<" "<<address<<" "<<roll<<" "<<setprecision(2)<<fixed<<height<<"\n";
    }
    void input()
    {
        cin>>name>>address>>roll>>height;
    }
    int roll;
    double height;

    student_information(string nm,string add)
    {
        nm = name;
        add = address;
    }
/*
    void st(string s,string s_1)
    {
        name = s;
        address= s_1;
    }*/

};

int main()
{
    student_information s("Mahin","Dinajpur");
    s.input();
    s.output();


    return 0;
}
