#include <bits/stdc++.h>
using namespace std;

void rec(int i, int n)
{
    while (i > n)
    {
        return;
    }
    // cout << i << endl;
    // rec(i + 1, n); //output is: 1 2 3 4 5

    rec(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n = 5;
    rec(1, n);

    return 0;
}