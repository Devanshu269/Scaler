// Problem Description

// Given a binary sorted matrix A of size N x N. Find the row with the maximum number of 1.

// NOTE:

// If two rows have the maximum number of 1 then return the row which has a lower index.
// Rows are numbered from top to bottom and columns are numbered from left to right.
// Assume 0-based indexing.
// Assume each row to be sorted by values.
// Expected time complexity is O(rows).

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
