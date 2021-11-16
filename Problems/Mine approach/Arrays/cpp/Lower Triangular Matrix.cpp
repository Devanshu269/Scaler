// You are given a N X N integer matrix A. You have to tell whether it is a lower triangular matrix or not.

// A square matrix is called lower triangular if all the entries above the main diagonal are zero. For any matrix P if elements P[i, j] = 0 (where j > i (1-based))
int Solution::solve(const vector<vector<int> > &A) {
    int N = A.size();
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(A[i][j] != 0){
                return 0;
                break;
            }
        }
            
    }
    return 1;
}