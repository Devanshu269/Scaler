// Problem Description

// You are given a 2D integer matrix A, return a 1D integer vector containing row-wise sums of original matrix.
vector<int> Solution::solve(vector<vector<int> > &A) {
    vector<int> ans;
    int Nrow = A.size(), Ncol = A[0].size();
    int sum;
    for(int i=0; i<Nrow; i++){
        sum=0;
        for(int j=0; j<Ncol; j++){
                sum += A[i][j];     
        }
        ans.push_back(sum);
    }
    return ans;
    
}