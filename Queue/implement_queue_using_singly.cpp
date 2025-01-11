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
        }
        tail->next = newnode;
        tail = newnode;
    }

    // pop

    void pop() // O(1)
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail == NULL;
        }
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
        // if(head == NULL){
        //     return true;
        // }else{
        //     return false;
        // }

        return head == NULL;
    }
};

int main()
{

    return 0;
}