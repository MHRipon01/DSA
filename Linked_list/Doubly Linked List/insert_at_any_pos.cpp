#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// void insert_at_any_pos(Node *head, int idx, int val)
// {
//     Node *newnode = new Node(val);
//     Node *tmp = head;
//     for (int i = 1; i < idx; i++)
//     {
//         tmp = tmp->next;
//     }
//     newnode->next = tmp->next;
//     tmp->next->prev = newnode;
//     tmp->next = newnode;
//     newnode->prev = tmp;
// }

void insert_at_any_pos(Node *head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for(int i = 1; i < idx; i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    // connection
    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    print_forward(head);
    // insert_at_any_pos(head, 2, 200);
    insert_at_any_pos(head,2, 80);
    // insert_at_any_pos(head, 3, 800);
    print_forward(head);
    return 0;
}