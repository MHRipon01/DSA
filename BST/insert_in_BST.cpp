#include <bits/stdc++.h>
using namespace std;

// Node class
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    // constructor
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Taking input from user
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        Node *myLeft, *myRight;

        cin >> l >> r;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }

    return root;
}

// print level order
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

// inserting in the BST
void insert(Node *&root, int val)
{
    if (root == NULL)
        root = new Node(val);
    if (root->val > val)
    {
        // left
        if (root->left == NULL)
            root->left = new Node(val);
        else
            insert(root->left, val);
    }
    else
    {
        // right
        if (root->right == NULL)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
}

int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    insert(root, val);
    level_order(root);

    return 0;
}