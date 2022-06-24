// Problem Description
// You are given a matrix A, you have to return another matrix which is the transpose of A.

// NOTE: Transpose of a matrix A is defined as - AT[i][j] = A[j][i] ; Where 1 ≤ i ≤ col and 1 ≤ j ≤ row

vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
int row = A.size(), col = A[0].size();
    vector<int> temp;
    vector<vector<int>> ans;
    for(int j=0; j<col; j++){
        temp.clear();
        for(int i=0; i<row; i++){
            temp.push_back(A[i][j]);
        }
        ans.push_back(temp);
    }
    return ans;
}