
//****Construct a list with N elements and the value will be V */
// list<type>myList(N,V);

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     list<int> l(4,7); //output: 7 7 7 7
//     // for (auto it = l.begin(); it != l.end(); it++)
//     // {
//     //     cout << *it << " ";
//     // }
//     //cout << endl;

// //range based
// for(int val:l){
//     cout << val << " " ;
// }
// cout << endl;

//     return 0;
// }

// **** Construct a list by copying another list****
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    // list<int> l2(l); //to copy l in l2
    int a[] = {10, 20, 30};
    list<int> l2(a, a + 3); // to copy an array in list (first_idx_of_arr, last index)

    vector<int> v = {10,20,30};
    list<int> l2(v.begin(), v.end());//copy a vector in list


    for (int val : l2)
    {
        cout << val << " ";
    }

    return 0;
}
