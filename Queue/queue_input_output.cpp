#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    // push
    void push(int val) // O(1)
    {
        sz++;
        Node *newnode = new Node(val);

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    // void push(int val) // O(1)
    // {
    //     sz++;
    //     Node *newnode = new Node(val);

    //     if (head == NULL) // Queue is empty
    //     {
    //         head = newnode;
    //         tail = newnode;
    //     }
    //     else // Queue is not empty
    //     {
    //         tail->next = newnode;
    //         tail = newnode;
    //     }
    // }

    // pop
    void pop() // O(1)
    {
        if (head == NULL)
        {
        return;
        }
        sz--;
        Node *deleteNode = head;
        head = head->next;
        
        delete deleteNode;
    }

    // front
    int front() // O(1)
    {
        return head->val;
    }

    // back
    int back() // O(1)
    {
        return tail->val;
    }

    // size
    int size()
    {
        return sz;
    }

    // empty
    bool empty()
    {
        return head == NULL;
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