// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s , s1;
    cin >> s >> s1;
    int ans = 0;
    unordered_map<char , int>sample , compare;
    for(int i = 0 ; i < s1.size() ; i++) sample[s[i]]++;
    int f = 0 , l = 0;
    while(l < s.size()){
        bool t = true;
        compare[s[l]]++;
        l++;
        if(l < s1.size()) continue;
        for(auto iter : sample)
            if(iter.second != compare[iter.first]){
                t = false;
                break;
            }
        if(t)ans++;
        compare[s[f]]--;
        f++;
    }
    cout << ans <<"\n";
    return 0 ;
}