#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl; // output:30
    pq.push(100);
    cout << pq.top() << endl; // output: 100
    pq.pop();                 // 100 deleted
    pq.pop();                 // 30 deleted
    cout << pq.top() << endl; // output: 10
    return 0;
}