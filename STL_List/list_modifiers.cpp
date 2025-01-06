#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10,20,30};

    // l.push_back(40);
    // l.push_front(01);

    // l.pop_back();
    // l.pop_front();
 
   cout << * next(l.begin(),2) << endl; //output: 30
 
 



    for(int val:l){
        cout << val << " ";
    }

    return 0;
}