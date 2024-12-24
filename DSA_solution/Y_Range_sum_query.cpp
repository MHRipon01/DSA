#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // Way-1: brute force
    //  while (q--)
    //  {
    //      int l, r;
    //      cin >> l >> r;
    //      int sum = 0;
    //      for (int i = l; i <= r; i++)
    //      {
    //          sum += v[i];
    //      }
    //      cout << sum << endl;
    //  }

    // Way-2: prefix sum
    vector<long long int> pre(n + 1);
    pre[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long int result;
        if (l == 1)
        {
            result = pre[r];
        }
        else
        {
            result = pre[r] - pre[l - 1];
        }
        cout << result << endl;
    }

    return 0;
}