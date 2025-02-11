#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         adj_mat[i][j] = 0;
    //     }
    // }

    // memset(mat_name,value,size of the matrix);
    memset(adj_mat, 0, sizeof(adj_mat));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
    }

    return 0;
}