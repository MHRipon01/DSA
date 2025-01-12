#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    // q.push(10);

    // if (!q.empty())
    // {
    //     q.pop();
    // }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }


    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }


    return 0;
}