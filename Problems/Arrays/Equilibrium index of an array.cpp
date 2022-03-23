// Problem Description

// You are given an array A of integers of size N.

// Your task is to find the equilibrium index of the given array

// Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

int Solution::solve(vector<int> &A) {
    int N = A.size();
    int ps[N];
    ps[0] = A[0];

    for(int i=1; i<N; i++){
        ps[i] = ps[i-1] + A[i];
    }
    for(int i=1; i<N-1; i++){
        if(ps[0] == ps[1]){
            return 0;
        }
        int LSum = ps[i-1];
        int RSum = ps[N-1] - ps[i];
        if(LSum == RSum){
            return i;
        }
    }
    return -1;
}
