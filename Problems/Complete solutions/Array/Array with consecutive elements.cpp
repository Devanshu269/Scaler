// Given an array of positive integers A, check and return whether the array elements are consecutive or not.
// NOTE: Try this with O(1) extra space.
int Solution::solve(vector < int > & A) {
    int n = A.size();
    int prev;
    //Sort the given array
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++) {
        if (i == 0)
            prev = A[i];
        else if (A[i] != prev + 1)
            return 0;
        prev = A[i];
    }
    return 1;
}
