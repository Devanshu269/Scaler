// Problem Description
// You are given two matrices A & B of equal dimensions and you have to check whether two matrices are equal or not.

// NOTE: Both matrices are equal if A[i][j] == B[i][j] for all i and j in the given range.

int Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    int Nrow = A.size(), Ncol = A[0].size();
    int Mrow = B.size(), Mcol = B[0].size();
    if(Nrow != Mrow || Ncol != Mcol){
        return 0;
    }
    for(int i=0; i<Nrow; i++){
        for(int j=0; j<Ncol; j++){
            if(A[i][j] != B[i][j]){
                return 0;
            }
        }
    }
    return 1;
}