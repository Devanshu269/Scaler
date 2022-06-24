// Problem Description
// Given an integer array A of size N. Return 1 if the array can be arranged to form an arithmetic progression, otherwise return 0.

// A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.
int Solution::solve(vector<int> &A) {
    int n = A.size();
    if (n == 1)
        return true;
 
    sort(A.begin(), A.end());

    int d = A[1] - A[0];
    for (int i = 2; i < n; i++)
        if (A[i] - A[i - 1] != d)
            return 0;
 
    return 1;

}
