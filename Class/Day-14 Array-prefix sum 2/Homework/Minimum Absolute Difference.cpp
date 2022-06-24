Problem Description
Given an array of integers A, find and return the minimum value of | A [ i ] - A [ j ] | where i != j and |x| denotes the absolute value of x.

int Solution::solve(vector<int> &A) {
    int N = A.size();
    sort(A.begin(), A.end());
    int ans = INT_MAX;
    for(int i=0; i<N; i++){
        int sum = abs(A[i] - A[i+1]);
        ans = min(ans, sum); 
    }
    return ans;
}