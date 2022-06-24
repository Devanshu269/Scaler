// Problem Description
// Given an integer array A of size N. You can remove any element from the array in one operation.
// The cost of this operation is the sum of all elements in the array present before this operation.

// Find the minimum cost to remove all elements from the array.

int Solution::solve(vector<int> &A) {
    int N = A.size();
    int ans=0;
    sort(A.begin(), A.end(), greater<int>());
    for(int i=0; i<N; i++){
        ans = ans + ((i+1)*A[i]);
    }
    return ans;
}
