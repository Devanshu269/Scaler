// Problem Description

// You are given an array A of integers of size N.

// Your task is to find the equilibrium index of the given array

// Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

int equilibrium(int arr[], int n)
{
    int sum = 0; // initialize sum of whole array     int leftsum = 0; // initialize leftsum  
    /* Find sum of the whole array */
    for (int i = 0; i < n; ++i)
        sum += arr[i];
 
    for (int i = 0; i < n; ++i)
    {
        sum -= arr[i]; // sum is now right sum for index i  
        if (leftsum == sum)
            return i;
 
        leftsum += arr[i];
    }
 
    /* If no equilibrium index found, then return -1 */
    return -1;
}
 
int Solution::solve(vector<int> &A) {
    int n=A.size();
    int arr[n];
    for(int i=0;i<n;i++) arr[i]=A[i];
    return equilibrium(arr,n);
}