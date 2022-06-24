// Problem Description
// You are given an array A of integers of size N.

// Your task is to find the equilibrium index of the given array

// The equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

// NOTE:

// Array indexing starts from 0.
// If there is no equilibrium index then return -1.
// If there are more than one equilibrium indexes then return the minimum index.
int Solution::solve(vector<int> &A) {
    int N = A.size();
    int PS[N];
    PS[0] = A[0];
    for(int i=1; i<N; i++){
        PS[i] = PS[i-1] + A[i];
    }
    int sumR, sumL;
    for(int i=0; i<(N-1); i++){
        if(PS[0] == PS[1]){
            return 0;
        }
        sumL = PS[i-1];
        sumR = PS[N-1] - PS[i];
        if(sumL == sumR){
            return i;
        }
    }
    return -1;
}