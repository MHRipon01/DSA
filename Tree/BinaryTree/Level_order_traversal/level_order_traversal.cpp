#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. take the front of q(first node)
        Node *f = q.front();
        q.pop();
        // 2. work with that node
        cout << f->val << " ";
        // 3.push the children
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right)
        {

            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // connecting all the nodes
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    level_order(root);

    return 0;
}