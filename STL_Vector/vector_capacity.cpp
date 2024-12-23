#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    cout << "Initial capacity: " << v.capacity() << endl;
    v.push_back(1);
    cout << " after adding 1 element: " << v.capacity() << endl;
    v.push_back(2);
    cout << " after adding 2 element: " << v.capacity() << endl;
    v.push_back(3);
    v.push_back(4);
    // cout << "Before clearing the vector: " << v.size() << endl;

    // v.clear();
    // cout << "After clearing the vector: " << v.size() << endl;

    // note: it doesn't deletes the memory, it just clears the values. But after adding new values, it will use the same memory(The past values will be deleted).

    // v.resize(3); //it changes the size of the vector;

    
    // v.resize(5, 100); //(size of the vector, value to be filled in the vector if the size is increased); //1 2 3 100 100
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}