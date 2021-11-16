// Problem Description

// You are given two matrices A & B of same size, 
// you have to return another matrix which is the sum of A and B.


vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    int row = A.size(), col = A[0].size();
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            A[i][j] += B[i][j];
    return A;
}