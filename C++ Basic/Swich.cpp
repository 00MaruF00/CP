#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    cout << "Enter a number 1 to 5 : ";
    cin>>a;
    switch(a)
    {
        case 1:
            cout<<"One\n";
            break;
        case 2:
            cout<<"Two\n";
            break;
        case 3:
            cout<<"Three\n";
            break;
        case 4:
            cout<<"Four\n";
            break;
        case 5:
            cout<<"Five\n";
            break;
        default :
            cout<< "Your input is not in range .\n";
    }
    return 0;
}