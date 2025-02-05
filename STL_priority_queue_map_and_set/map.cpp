#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map<string,string> mp;
    map<string, int> mp;

    // int fre[100];  // for frequency array
    // fre[5]= 20;

    // map
    // syntax: map_name [key] = value;
    mp["tamim"] = 2;  // TC:logN
    mp["rayhan"] = 5; // TC: logN
    mp["saiful"] = 50;

    // cout << mp["hamim"] << endl; //if the key is unavailable then it'll print 0;
    // cout << mp["rayhan"] << endl; //output :5

    // for (auto it = mp.begin(); it != mp.end(); it++) //O(NlogN)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    if (mp.count("rayhan"))
    {
        cout << "Ache";
    }
    else
        cout << "Nai";

    return 0;
}