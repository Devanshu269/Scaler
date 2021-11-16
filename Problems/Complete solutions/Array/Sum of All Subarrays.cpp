// Problem Description
// You are given an integer array A of length N.
// You have to find the sum of all subarray sums of A.
// More formally, a subarray is a defined as a contiguous part of an array,
// which we can obtain by deleting zero or more elements from either end of the array.
// A subarray sum denotes the sum of all the elements of that subarray.


long Solution::subarraySum(vector<int> &A) {
    long ans = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
        ans += (long)A[i] * (i + 1) * (n - i);
    return ans;
}