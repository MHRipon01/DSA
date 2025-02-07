#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50};

    // l.push_back(40);
    // l.push_front(01);

    // l.pop_back();
    // l.pop_front();

    //    cout << * next(l.begin(),2) << endl; //output: 30
    // l.insert(next(l.begin(), 2), 100);
    // l.erase(next(l.begin(),3));

    replace(l.begin(), l.end(), 20, 100);

    auto it = find(l.begin(), l.end(), 10);
    if (it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}