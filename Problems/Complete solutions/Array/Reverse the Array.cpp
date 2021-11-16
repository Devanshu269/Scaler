//Problem Description

//You are given a constant array A.

//You are required to return another array which is the reversed form of input array.

vector<int> Solution::solve(const vector<int> &A) {
    int n = A.size();
    vector<int> ans;
    for(int i = 0; i < n; i++)ans.push_back(A[n-i-1]);
    return ans;
}
