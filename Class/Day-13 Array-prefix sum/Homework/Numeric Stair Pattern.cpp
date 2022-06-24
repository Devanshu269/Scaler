// Problem Description

// Given an integer N, print the corresponding pattern for N.

// For example if N = 4 then pattern will be like:

// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N;
    cin >> N;
    for(int i = 1; i <= N; ++i)
    {
        for(int j = 1; j < i; j++)
        {
            cout << j << " ";
        }
        cout << i;
        cout << "\n";
    }
    return 0;
}