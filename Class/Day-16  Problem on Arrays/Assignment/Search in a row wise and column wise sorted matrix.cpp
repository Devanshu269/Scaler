// Problem Description

// Given a matrix of integers A of size N x M and an integer B.
// In the given matrix every row and column is sorted in increasing order. Find and return the position of B in the matrix in the given form:
// If A[i][j] = B then return (i * 1009 + j)
// If B is not present return -1.

// Note 1: Rows are numbered from top to bottom and columns are numbered from left to right.
// Note 2: If there are multiple B in A then return the smallest value of i*1009 +j such that A[i][j]=B.

int Solution::solve(vector<vector<int> > &A, int B) {
   int N = A.size();
    int M = A[0].size();
    if (N == 0)
        return -1;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++){
            if(A[i][j] == B)
        {
  
            return ((i+1)*1009+(j+1));
        }
        }   
    }
  
    return -1;
}
