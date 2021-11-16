// Given an array of integers A and an integer B, 
// find and return the difference of B'th max element and B'th min element of the array A.

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    assert(n>=1&&n<=100000);
    assert(B>=1&&B<=n);
    sort(A.begin(), A.end());
    return A[A.size() - B] - A[B - 1];
}