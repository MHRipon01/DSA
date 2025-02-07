#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl; // output 5
    pq.push(2);
    cout << pq.top() << endl; // output 2
    pq.pop();                 // deleted 2
    cout << pq.top() << endl; // output 5
    return 0;
}