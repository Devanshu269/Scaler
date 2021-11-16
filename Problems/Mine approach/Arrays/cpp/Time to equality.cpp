// Problem Description

// Given an integer array A of size N. In one second you can increase the value of one element by 1.

// Find the minimum time in seconds to make all elements of the array equal.

int Solution::solve(vector<int> &A) {
    int N = A.size();
    int count = 0, time = 0;
    sort(A.begin(), A.end());
    for(int i=0; i<N-1; i++){
        if(A[i] != A[N-1]){
            count = A[N-1]-A[i];
            time = time + count;
        }
    }
    return time;
}