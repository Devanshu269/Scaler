// Problem Description

// You are given two integer matrices A(having M X N size) and B(having N X P). 
// You have to multiply matrix A with B and return the resultant matrix. (i.e. return the matrix AB).
vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    int M = A.size();
    int N = A[0].size();
    int P = B[0].size();

    vector<vector<int>> C(M, vector<int>(P));

    for (int i = 0; i < M;i++){
        for (int j = 0; j < P;j++){
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < M;i++){
        for (int j = 0; j < P;j++){
            for (int k = 0; k < N;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}