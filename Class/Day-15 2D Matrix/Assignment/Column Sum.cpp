// Problem Description

// You are given a 2D integer matrix A, return a 1D integer vector containing column-wise sums of original matrix.

vector<int> Solution::solve(vector<vector<int> > &A) {
    int row = A.size(), col = A[0].size();
    vector<int> ColSum;
    int sum = 0;
    for(int j = 0; j < col; j++){
        sum = 0;
        for(int i = 0; i < row; i++){
            sum = sum + A[i][j];
        }
        ColSum.push_back(sum);
    }
    return ColSum;
}