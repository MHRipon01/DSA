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
        newnode->prev = tail;
        tail = newnode;
    }

    // pop

    void pop() // O(1)
    {
        sz--;
        if (head == NULL)
            return;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev= NULL;
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
    int size()  //O(1)
    {
        return sz;
    }

    // empty
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }

        // return head == NULL;
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