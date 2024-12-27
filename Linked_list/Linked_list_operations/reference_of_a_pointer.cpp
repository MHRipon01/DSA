// #include<bits/stdc++.h>
// using namespace std;


// // void fun(int *p){
// void fun(int* &p){
//     // *p = 100;
// int y = 200;
// p =&y;
// // cout << "In function:" << *p << endl;
// cout << "in fun:" << &p << endl;
// }


// int main(){
//     int x = 10;
//     int *p = &x;

//     fun(p);
// // cout << "In main:" << *p << endl;
// // cout << x << endl;
// // cout << p << endl;
// cout << "In main:" << &p << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

void fun(int *p) {
    int y = 200;
    p = &y; // p now points to y
    // cout << "In function:" << *p << endl; // This would print the value of y (200)
    cout << "Address of pointer p in fun: " << &p << endl; // Prints the address of the pointer p
}

int main() {
    int x = 10;
    int *p = &x; // p holds the address of x

    fun(p); // Passes the address of x to the function fun
    // cout << "In main:" << *p << endl; // This would print the value of x (10)
    // cout << x << endl; // This would print the value of x (10)
    // cout << p << endl; // This would print the address of x
    cout << "Address of pointer p in main: " << &p << endl; // Prints the address of the pointer p
    return 0;
}