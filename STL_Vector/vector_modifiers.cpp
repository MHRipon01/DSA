#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> v2;
    vector<int> v3 = {100, 200, 300};
    v2 = v;
    v.pop_back(); // 1,2,3,4,5,6,7
    // v.insert(v.begin()+2,100); //1,2,100,3,4,5,6,7
    v.insert(v.begin() + 2, v3.begin(), v2.end());//1,2,100,200,300,3,4,5,6,7

    // v.erase(v.begin()+1, v.begin()+5); //1,6,7
    auto it = find(v.begin(), v.end(), 100);//find the element 100 in the vector
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}