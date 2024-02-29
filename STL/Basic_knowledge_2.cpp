#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Set functionality 
    set<int>se;
    se.insert(2); // It works in log(n) time complexity 
    se.insert(3);
    se.insert(5);
    se.insert(28);
    se.erase(se.begin()); // Delete 1st one . The complexity is log(n)
    // does not work -> se.erase(se.begin() , se.begin() + 2); // Delete 1st 2 elements 
    se.erase(6); // Log(n)
    

    return 0 ;
}