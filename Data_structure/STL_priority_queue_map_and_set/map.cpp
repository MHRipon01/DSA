// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // map<string,string> mp;
//     map<string, int> mp;

//     // int fre[100];  // for frequency array
//     // fre[5]= 20;

//     // map
//     // syntax: map_name [key] = value;
//     mp["tamim"] = 2;  // TC:logN
//     mp["rayhan"] = 5; // TC: logN
//     mp["saiful"] = 50;

//     // cout << mp["hamim"] << endl; //if the key is unavailable then it'll print 0;
//     // cout << mp["rayhan"] << endl; //output :5

//     // for (auto it = mp.begin(); it != mp.end(); it++) //O(NlogN)
//     // {
//     //     cout << it->first << " " << it->second << endl;
//     // }

//     if (mp.count("rayhan"))
//     {
//         cout << "Ache";
//     }
//     else
//         cout << "Nai";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map<key_data_type, value_data_type> map_name;

    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        map<string, int> freq;
        string S;
        getline(cin, S);

        stringstream ss(S);
        string wrd;

        string mx_freq_wrd ;
        int mx_count = 0;
        while (ss >> wrd)
        {
            freq[wrd]++;
            
                if (freq[wrd]> mx_count)
                {
                    mx_freq_wrd = wrd;
                    mx_count = freq[wrd];
                }
            
        }

        cout << mx_freq_wrd << " " << mx_count << endl;
    }
    return 0;
}
