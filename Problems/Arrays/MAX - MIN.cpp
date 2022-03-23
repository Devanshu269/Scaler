// Given an array of integers A and an integer B, 
// find and return the difference of B'th max element and B'th min element of the array A.

int Solution::solve(vector<int> &A, int B) {
    int N = A.size();
    sort(A.begin(), A.end());
    int res = A[N-B] - A[B-1];
    return res;
}