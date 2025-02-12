#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n]; // array of vector

    // while loop
    // while (e--)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     adj_list[a].push_back(b);
    //     adj_list[b].push_back(a); // for undirected graph
    // }

    // for loop
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected graph
    }

    for(int i=0; i<n; i++){
        cout << i << "->";
        for(int x : adj_list[i]){
            cout << x<< " ";
        }
        cout << endl;
    }


    return 0;
}