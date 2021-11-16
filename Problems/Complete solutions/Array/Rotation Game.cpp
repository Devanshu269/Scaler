// Problem Description

// You are given an integer array A and an integer B. You have to print the same array after rotating it B times towards right.
#include<bits/stdc++.h>
using namespace std;

void reverse(vector < int > & A, int start, int end) {
    int i, j;
    for (i = start, j = end; i < j; i++, j--) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}
int main() {
    int N;
    cin >> N;
    vector < int > A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int B;
    cin >> B;
    B = B % N;
    reverse(A, 0, N - 1);
    reverse(A, 0, B - 1);
    reverse(A, B, N - 1);
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";
    return 0;
}