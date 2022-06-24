// Problem Description

// Given an integer N, print the corresponding Inverted Full Pyramid pattern for N.

// For example if N = 5 then pattern will be like:

// * * * * * 
//  * * * * 
//   * * * 
//    * *    
//     * 
// NOTE: There should be exactly one extra space after each * for each row.


#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N;
    cin >> N;
    int k = N-1;
    for (int i = N; i>=1; i--) {
 
        for (int j = 0; j<N-i; j++)
            cout << " ";
        k = k - 1;
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}