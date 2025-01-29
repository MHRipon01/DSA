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
Node * input_tree(){
    int val;
    cin >> val;
    Node *root;
    if(val == -1) root = NULL;
    else root = new Node(val);


    return root;
}

int main()
{



    return 0;
}