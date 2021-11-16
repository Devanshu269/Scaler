// Problem Description

// You are given two matrices A & B of same size, 
// you have to return another matrix which is the sum of A and B.


vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
vector<vector<int>> sum;
vector<int> add;
for(int i=0; i<A.size(); i++){
    add.clear();
    for(int j=0; j<A[i].size(); j++){
        add.push_back(A[i][j] + B[i][j]);
        }
        sum.push_back(add);
    }
    return sum;
}