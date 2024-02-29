#include <bits/stdc++.h>
using namespace std;

class user
{
protected:
    string name;
    int id;
};
class admin : user
{
public:
    string status;
    void input()
    {
        cin >> name >> id >> status;
    }
    void output()
    {
        cout << name << " " << id << " " << status << "\n";
    }
};

int main()
{
    admin ad;

    ad.input();
    ad.output();

    return 0;
}
