#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //O(1)
    cin >> n; //O(1)

    for (int i = 1; i <= sqrt(n); i++) // O(sqrt N)
    {
        cout << i << endl;
    }

    return 0;
}