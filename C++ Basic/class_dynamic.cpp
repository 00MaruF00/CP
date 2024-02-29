
#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int age;

    student(string nm, int roll, int age)
    {
        name = nm;
        this->roll = roll;
        this->age = age;
    }
    student(string nam, int ag)
    {
        name = nam;
        age = ag;
    }

    void print_info()
    {
        cout << name << " " << roll << " " << age << "\n";
    }
};

int main()
{
    student *s = new student("maruf", 43, 3);
    s->print_info();
    student *p = new student("Maruf",67);
    (*p).print_info();


    return 0;
}
