// Problem Description

// Given an integer N, print the corresponding Inverted Half Pyramid pattern for N.

// For example if N = 4 then pattern will be like:

// ****
// ***
// **
// *

#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N;
    cin >> N;
    for(int i=N; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}