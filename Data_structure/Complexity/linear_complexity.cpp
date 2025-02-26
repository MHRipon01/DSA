// Rules to calculate time complexity
//  1. Always take the worst case.
// 2. Ignore the constant values.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //O(1)
    cin >> n; //O(1)
    for (int i = 0; i <= n; i++) //O(n)
    {
        cout << i << " ";
    }

    return 0; //o(1)
}

//total complexity : O(n)