//Problem Description
// Given an array of size N, find the subarray of size K with the least average.

int findMinAvgSubarray(int arr[], int n, int k)
{
  
    // Initialize  beginning index of result
    int res_index = 0;
  
    // Compute sum of first subarray of size k
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
        curr_sum += arr[i];
  
    // Initialize minimum sum as current sum
    int min_sum = curr_sum;
  
    // Traverse from (k+1)'th element to n'th element
    for (int i = k; i < n; i++) {
        // Add current item and remove first item of
        // previous subarray
        curr_sum += arr[i] - arr[i - k];
  
        // Update result if needed
        if (curr_sum < min_sum) {
            min_sum = curr_sum;
            res_index = (i - k + 1);
        }
    }
    return res_index;
}
int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int arr[n];
    for(int i=0;i<n;i++) arr[i]=A[i];
    return findMinAvgSubarray(arr,n,B);
}
