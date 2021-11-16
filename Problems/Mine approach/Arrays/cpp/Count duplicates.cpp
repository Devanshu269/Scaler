// Problem Description

// You are given an integer array A having length N. You have to find the number of duplicate(redundant) elements in the array.

int Solution::solve(const vector<int> &A) {
    int count=0;
    int N = A.size();
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(A[i]==A[j]){
            count++;
            break;
        }
        }
        
    }
    return count;
}