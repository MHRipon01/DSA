#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{
public:
    list<int> l;

    // push
    void push(int val) // O(1)
    {
        l.push_back(val);
    }

    // pop

    void pop() // O(1)
    {
        l.pop_front();
    }

    // front
    int front() // O(1)
    {
        return l.front();
    }

    // back
    int back() // O(1)
    {
        return l.back();
    }

    // size
    int size() // O(1)
    {
        return l.size();
    }

    // empty
    bool empty()
    {
        l.empty();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // cout << q.front() << " " << q.back() << " " << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}