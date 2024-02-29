#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long sz , k;
    cin >> sz >> k;
    int ar[sz];
    for(int i = 0; i < sz ; i++)cin >> ar[i];
    int temp = ar[0] , counter = 0;
    for(int i = 1 ; i < sz ; i++){
        if(temp > ar[i]) counter++;
        else temp = ar[i] , counter = 1;
        if(counter == k){
            cout << temp <<"\n";
            return 0;
        }
    }
    cout << temp <<"\n";
    return 0;
}