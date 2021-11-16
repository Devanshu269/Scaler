// Problem Description

// You are given a 2D integer matrix A, 
// return a 1D integer vector containing column-wise sums of original matrix.

vector<int> Solution::solve(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size();
	vector<int> ans;
    for(int j = 0; j < m; j++){
    	int temp = 0;
    	for(int i = 0; i < n; i++){
    		temp += A[i][j];
    	}
    	ans.push_back(temp);
    }
    return ans;
}