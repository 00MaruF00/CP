// Corner e greater and less value ta thakte hobbe . 
/*
You have a matrix 2×2 filled with distinct integers. You want your matrix to become beautiful. The matrix is beautiful if the following two conditions are satisfied:

in each row, the first element is smaller than the second element;
in each column, the first element is smaller than the second element.

You can perform the following operation on the matrix any number of times: rotate it clockwise by 90 degrees, so the top left element shifts to the top right cell, the top right element shifts to the bottom right cell, and so on:


Determine if it is possible to make the matrix beautiful by applying zero or more operations.

Input
The first line contains one integer t (1≤t≤1000) — the number of test cases.

Each test case consists of two lines. Each of those lines contains two integers — the elements of the corresponding row of the matrix. In each matrix, all four elements are distinct integers from 1 to 100.

Output
For each test case, print YES if the matrix can become beautiful, or NO otherwise. You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).
*/

#include<bits/stdc++.h>
#define CAPACITY 2
using namespace std;

void is_Beautiful()
{
    int maxx = -1,minn = 100000;
    int ara[CAPACITY][CAPACITY];
    for(int i =0;i<CAPACITY;i++)
    {
        for(int j =0;j<CAPACITY;j++)
        {
            cin>>ara[i][j];
            if(maxx<ara[i][j])
                maxx = ara[i][j];
            if(minn>ara[i][j])
                minn = ara[i][j];
        }
    }
    if((ara[0][0] == maxx && ara[1][1] == minn) || (ara[0][0] == minn && ara[1][1] == maxx) || (ara[0][1] == maxx && ara[1][0] == minn) || (ara[0][1] == minn && ara[1][0] == maxx) )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    int test;
    cin>>test;
    while(test--)
        is_Beautiful();

    return 0;
}