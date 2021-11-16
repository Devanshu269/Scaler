// Given a matrix of integers A of size N x M and an integer B.
// In the given matrix every row and column is sorted in increasing order. Find and return the position of B in the matrix in the given form:
// If A[i][j] = B then return (i * 1009 + j)
// If B is not present return -1.
int Solution::solve(vector < vector < int > > & A, int B) {
    int n = A.size();
    int m = A[0].size();
    int ans = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == B) {
                if (ans == -1) {
                    ans = (i + 1) * 1009 + j + 1;
                } else {
                    ans = min(ans, (i + 1) * 1009 + j + 1);
                }
            }
        }
    }
    return ans;
}