// Problem Description

// You are given a constant array A and an integer B.

// You are required to return another array where outArr[i] = A[i] + B.
vector<int> Solution::solve(const vector<int> &A, int B) {
    int N = A.size();
    vector<int> ans;
    int sum = 0;
    for(int i=0; i<N; i++){
        sum = A[i] + B;
        ans.push_back(sum);
        // sum = 0;
    }
    return ans;
}
