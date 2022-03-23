Problem Description

Given a 2D Matrix A of dimensions N*N, we need to return sum of all possible submatrices.
int Solution::solve(vector<vector<int> > &A) {
    int N = A.size();
    long int ans=0, count;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            count = (i+1)*(j+1)*(N-i)*(N-j);
            ans = ans + count*A[i][j]; 
        }
    }
    return ans;
}