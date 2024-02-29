#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ar[100] = {1}; // This does not means value of all array is one . This means the first element of the array is 
                        // initialized  with 1 and others are automatically Zero .
    int arr[1000] = {0}; // Same explanation as above  .
    
    vector<int>vec1(4 , 10);
    // Coppy vector 1 into the vector 2 , then i can write .
    //vector<int>(vec1.begin() , vec1.end()) or another method 
    vector<int>vec2(vec1);
    // Note : push_back function in vector is slightly slower than emplace_back() , they work the same task .
    vector<int>vec3;
    vec3.emplace_back(7);
    cout << vec3[0] <<"\n";
    // Dclearing 2D vector .
    vector<vector<int>>vec4;
    // Delclearing A 2D vector after declearing their size . 
    vector<vector<int>>v1(10 , vector<int> (20 , 0)); /// Here 10 X 20 size vector has been created . 
    
    return 0 ;
}