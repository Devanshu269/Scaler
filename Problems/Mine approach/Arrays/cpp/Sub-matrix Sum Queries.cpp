Problem Description

Given a matrix of integers A of size N x M and multiple queries Q, for each query find and return the submatrix sum.

Inputs to queries are top left (b, c) and bottom right (d, e) indexes of submatrix whose sum is to find out.

NOTE:

Rows are numbered from top to bottom and columns are numbered from left to right.
Sum may be large so return the answer mod 109 + 7.
int add(int x, int y, int mod) {

    return ( ((x+y)%mod) + mod)%mod;
}
vector<int> Solution::solve(vector<vector<int> > &A, vector<int> &B, vector<int> &C, vector<int> &D, vector<int> &E) {
const int mod=1e9+7;
int N= (int)A.size();
int M = (int)A[0].size();
vector<vector<int>> psa(N, vector<int>(M, 0));
for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            psa[i][j] = A[i][j];
            if(i>0){
                psa[i][j] = add(psa[i][j], psa[i-1][j], mod);
            }
            if(j>0){
                psa[i][j] = add(psa[i][j], psa[i][j-1], mod);
            }
            if(i>0&&j>0){
                psa[i][j] = add(psa[i][j], -1*psa[i-1][j-1], mod);
            }
        }
    }
vector<int> ans;
int sum;
for(int i=0; i<B.size(); i++){
    int a1,a2,b1,b2;
    a1=B[i]-1;
    b1=C[i]-1;
    a2=D[i]-1;
    b2=E[i]-1;
    sum=psa[a2][b2];
    if(a1>0){
        sum = add(sum, -1*psa[a1-1][b2], mod);
    }
    if(b1>0){
        sum = add(sum, -1*psa[a2][b1-1], mod);
    }
    if(a1>0&&b1>0){
        sum = add(sum, psa[a1-1][b1-1], mod);
    }
    ans.push_back(sum);
}
return ans;
}