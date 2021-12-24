// Problem Description

// Given an unsorted integer array A of size N. Find the first missing positive integer.

// Note: Your algorithm should run in O(n) time and use constant space.

int Solution::firstMissingPositive(vector<int> &A) {
    long int N = A.size();
    long int test[N];
    for(int i=0; i<N; i++){
        test[i] = -1;
    }
    for(int i=0; i<N; i++){
        if(A[i]<1 || A[i]>N){
            continue;
        }else{
            test[A[i]-1] = A[i];
        }
    }
    for(int i=0; i<N; i++){
        if(test[i] != (i+1)){
            return (i+1);
            break;
        }
    }
    return (N+1);
}