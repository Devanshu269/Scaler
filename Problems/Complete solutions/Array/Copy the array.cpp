// You are given a constant array A and an integer B.

// You are required to return another array where outArr[i] = A[i] + B.
vector<int> Solution::solve(const vector<int> &A, int B) {
    int n =A.size();
    vector<int> ans(n);
    for(int i = 0; i < n; i++) ans[i] = A[i] + B;
    return ans;
}