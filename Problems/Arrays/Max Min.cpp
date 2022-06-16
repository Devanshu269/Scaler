// Problem Description

// Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

// NOTE: You should make minimum number of comparisons.

int Solution::solve(vector<int> &A) {
    int N= A.size();
    int sum=0;
    sort(A.begin(), A.end());
    sum=A[N-1] + A[0];
    return sum;
}