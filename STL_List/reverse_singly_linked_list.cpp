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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    // tail = tail->next;
    tail = newnode; // same as tail = tail->next;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void reverse_linked_list(Node *&head, Node *&tail, Node *tmp)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_linked_list(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    //  print_linked_list(head);
    reverse_linked_list(head,tail, head);
    print_linked_list(head);
    cout << head->val << " ";
    cout << head->next->val << " ";
    cout << tail->val << " ";

    return 0;
}