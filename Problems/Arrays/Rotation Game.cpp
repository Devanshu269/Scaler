// Problem Description

// You are given an integer array A and an integer B. You have to print the same array after rotating it B times towards right.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
        int N = 0;
        cin >> N;
        vector<int> A(N);
        for(int n=0; n<N; n++){
            cin >> A[n];
        }
 
    int B;
    cin >> B;
     B = B % N;
 
    for(int i = 0; i < N; i++)
    {
       if(i < B)
       {
           cout << A[N + i - B] << " ";
       }
       else
       {
           cout << (A[i - B]) << " ";
       }
    }

}