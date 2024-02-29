#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz, pick_number;
    cin >> sz >> pick_number;

    vector<int> ar(sz);

    for (int i = 0; i < sz; i++)
        cin >> ar[i];
    int left, right, middle;

    int i = 0, counter = 1;
    while (1)
    {
        if (i == 0)
            middle = (sz) / 2;
        else
            middle = (left + right) / 2;
        if (ar[middle] == pick_number)
        {
            cout <<"The Number is : "<<pick_number <<" "<<"The position : "<<middle<<"\n";
            counter = 0;break;
        }
        else if(left-right == -1)
        {
            if(ar[right] == pick_number)
            {
                counter = 0;
                cout<<"The Number is : "<<pick_number<<" "<<"The position : "<<right<<"\n";break;
            }
            else
                break;
        }
        else if (ar[middle] < pick_number)
        {
            left = middle;
            if (i == 0)
                right = sz - 1;
        }
        else
        {
            right = middle;
            if (i == 0)
                left = 0;
        }
        i++;
    }
    if(counter)
        cout<<"Not found"<<"\n";

    return 0;
}
