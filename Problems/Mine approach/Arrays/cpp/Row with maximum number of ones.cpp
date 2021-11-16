// Problem Description

// Given a binary sorted matrix A of size N x N. Find the row with the maximum number of 1.

int Solution::solve(vector<vector<int> > &A) {
    int N = A.size();
    int i = 0,j = N-1;
    int count = 0, ans = 0;
    for (int i=0, j=N-1; i<N;i++)
{
    while (A[i][j]==1) 
    {
        ans = i;
        j--;
    }
}
    return ans;
}