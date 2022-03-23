Problem Description

Given an integer N, print the corresponding stair pattern for N.

For example if N = 4 then stair pattern will be like:

*
**
***
****

#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}