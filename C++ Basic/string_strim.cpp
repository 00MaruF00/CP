#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; getline(cin,s);
    stringstream ss(s);
    // or ss<<s;
    string w;
    int found = 0;
    while(ss>>w){
        if(w=="Arif"){
            found = 1;
            break;
        }
    }
    (found==1)? cout<<"Found":cout<<"Not found";
    return 0;
}