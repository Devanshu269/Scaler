// Problem Description

// You are given a N X N integer matrix.
//  You have to find the sum of all the minor diagonal elements of A.

// Minor diagonal of a M X M matrix A is a collection of elements A[i, j] 
// such that i + j = M + 1 (where i, j are 1-based).
int Solution::solve(const vector<vector<int> > &A) {
    int N = A.size();
    int sum = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i+j == (N-1)){
                sum += A[i][j];
            }
        }
    }
    return sum;
    
}

//optimse
int Solution::solve(const vector<vector<int> > &A) {
    int N = A.size();
    
    int sum = 0;
    for (int i = 0; i < N;i++){
        sum += A[i][N - 1 - i];
    }

    return sum;
    
}