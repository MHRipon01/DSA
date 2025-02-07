#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;              //vector v=[1 ];
    cin >> n;
    vector<int> v;
    for(int i=0; i<n;i++){
       int x;   //x=[1  ]
       cin >> x; //1
        v.push_back(x);
    }


  for(int i =0; i<n;i++){
       cout << v[i] << " ";
    }


    return 0;
}