// Problem Description

// You are given two integer matrices A and B having same size(Both having same number of rows (N) and columns (M)). 
// You have to subtract matrix A from B and return the resultant matrix. (i.e. return the matrix A - B).

// If X and Y are two matrices of the same order (same dimensions). Then X - Y is a matrix of 
// the same order as X and Y and its elements are obtained by subtracting the elements of Y from the corresponding 
// elements of X. Thus if Z = [z[i][j]] = X - Y, then [z[i][j]] = [x[i][j]] – [y[i][j]].

vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    int N = A.size();
    int M = A[0].size();

    vector<vector<int>> C(N, vector<int>(M));
    
    for (int i = 0; i < N;i++){
        for (int j = 0; j < M;j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    return C;
}
