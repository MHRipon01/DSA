#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 10, 50, 40, 60, 30, 20};

    // l.sort();//ascending
    // l.sort(greater<int>());//descending
    l.unique(); // removes the duplicate values. N.B. list must be sorted
    l.reverse(); //reverse the list
    
    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}