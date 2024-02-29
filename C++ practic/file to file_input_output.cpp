#include<bits/stdc++.h>

using namespace std;
int main()
{
    ofstream of;
    ifstream ifs;

    of.open("output.txt");
    ifs.open("input.txt");

    string s;

    getline(ifs,s);
    of<<s<<endl;

    return 0;
}
