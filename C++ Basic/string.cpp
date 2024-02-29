#include<bits/stdc++.h>
using namespace std;

/*string func_1(string s)
{
    s.pop_back();
    s.erase(s.begin()+0);
    return s;
}*/

/*void func_2(string s)
{
    s.pop_back();
    s.erase(s.begin()+0);
    cout<<"From function_2 : "<< s<<endl;
}*/

void function_3(string &s)
{
    s.pop_back();
    s.erase(s.begin()+0);
    cout<<"from inside function_3 : "<<s<<endl;
}

int main()
{
    /* string concatination .
    string s_1,s_2,s;
    cin>>s_1>>s_2;
    s = s_1 + s_2;
    cout<<s<<endl;*/

    /* Use of pop.back() and erase .
    string st;
    cin>>st;
    st.pop_back();
    cout<<st<<"\n";
    st.erase(st.begin()+2);
    cout<<st<<endl;*/

    /*found string len
    int len;
    string stt;
    cin>>stt;
    len = stt.size();
    cout<<len<<endl;*/

    /*Pass a string to a function and return a string from this function .
    string sf_1,ans;

    cin>>sf_1;
    ans = func_1(sf_1);
    cout<<"Main function string : "<<sf_1<<endl<<"Return from func_1 : "<<ans<<endl;*/

    /*  String and void function .
    string sf_2;
    cin>>sf_2;
    func_2(sf_2);
    cout<<"From main function : "<<sf_2<<endl;*/

    // Here function takes an input as string address . and have changed it permanently .
    string sf_3;
    cin>>sf_3;
    function_3(sf_3);
    cout<<"From main function : "<<sf_3<<endl;


    return 0;
}
