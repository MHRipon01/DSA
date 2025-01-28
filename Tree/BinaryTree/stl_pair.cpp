#include <bits/stdc++.h>
using namespace std;

// int and int

// int main(){

//     // pair<string,int>p;
//     // pair<string,char>p;
//     pair<int,int>p;
//     p = make_pair(2,3);
//     cout << p.first << endl;
//     cout << p.second << endl;

//     return 0;
// }

// string and int

// int main(){

//     pair<string,int>p;
//     // p = make_pair("Hello",3);//make_pair function way
//     p = {"hi",3};//curly braces way
//     cout << p.first << endl;
//     cout << p.second << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }

    //output
    for(int i = 0;i<n;i++){
        cout << v[i].first << " " << v[i].second << endl;
    }


    return 0;
}