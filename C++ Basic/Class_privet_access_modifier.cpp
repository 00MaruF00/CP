// Ekhane privaet group e function er madhome input deya hoy..
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
    int roll;
    double height;

    void input()
    {
        cout<<"Enter roll and height:";
        cin>>roll>>height;
    }/*
    string str()
    {
        string s_9;
        cin>>s_9;
        return s_9;
    }*/
    void st(string s,string s_1)
    {
        name = s;
        address= s_1;
    }

};

int main()
{
    student_information s_2;
    string m,n;
    cout<<"Enter name and address : ";
    cin>>m>>n;
    s_2.st(m,n);
    s_2.input();
    s_2.output();

    return 0;
}
