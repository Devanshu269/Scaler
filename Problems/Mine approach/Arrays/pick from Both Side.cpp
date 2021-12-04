Problem Description

Given an integer array A of size N.

You can pick B elements from either left or right end of the array A to get maximum sum.

Find and return this maximum possible sum.
int Solution::solve(vector<int> &A, int B) {
    int N = A.size();
    int sum=0, ans;
    for(int i=0; i<B; i++){
        sum += A[i];
    }
    ans = sum;
    for(int i=1; i<=B; i++){
        sum = sum - A[B-i] + A[N-i];
        ans = max(ans, sum);
    }
    return ans;
}