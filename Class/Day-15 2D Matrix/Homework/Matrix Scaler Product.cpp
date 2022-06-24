// Problem Description
// You are given a matrix A and and an integer B, you have to perform scalar multiplication of matrix A with an integer B.
vector<vector<int> > Solution::solve(vector<vector<int> > &A, int B) {
    vector<vector<int> > res;
    vector<int> mul;
    int Nrow = A.size(), Ncol = A[0].size();
    int ans;
    for(int i=0; i<Nrow; i++){
        for(int j=0; j<Ncol; j++){
            ans = B * A[i][j];
            mul.push_back(ans);
        }
        res.push_back(mul);
        mul.clear();
    }
    return res;
}
