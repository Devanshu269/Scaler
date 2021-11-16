// Problem Description

// You are given two integer matrices A(having M X N size) and B(having N X P). 
// You have to multiply matrix A with B and return the resultant matrix. (i.e. return the matrix AB).
vector<vector<int> > Solution::solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    int rowA= A.size(), colA = A[0].size(), rowB = B.size(), colB = B[0].size();
    vector<vector<int> > ans;
    vector<int> res;

    for(int i=0; i<rowA; i++){
        for(int j=0; j<colB; j++){
                int sum=0;
                for(int k=0; k<rowB; k++){
                    sum = sum + A[i][k]*B[k][j];
                }
                res.push_back(sum);
                
                
        }
        ans.push_back(res);
        res.clear();
    }
    return ans;
}