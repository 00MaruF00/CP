#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("color 3b");
    int n;
    cin>>n;
    int* ara =  new int [n];

    for(int i =0;i<n;i++)
        cin>>ara[i];
    for(int i = 0;i<n;i++)
        cout<<ara[i]<<" ";
    delete []ara;

    return 0;
}
