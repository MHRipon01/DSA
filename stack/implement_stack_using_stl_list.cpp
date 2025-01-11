#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
list<int>l;
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    // static way
    // myStack st;
    //  st.push(10);
    //  st.push(20);
    //  st.push(30);

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // st.pop();
    // if (!st.empty())
    // {
    //     cout << st.top() << endl;
    // }
    // if (!st.empty())
    // {

    //     st.pop();
    // }

    // taking input from user
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
} 