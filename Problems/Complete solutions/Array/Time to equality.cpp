// Problem Description

// Given an integer array A of size N. In one second you can increase the value of one element by 1.

// Find the minimum time in seconds to make all elements of the array equal.

int Solution::solve(vector<int> &A) {
    int n=A.size();
      int val=0;
      for(int i=0;i<n;i++)
      {
        val=max(val,A[i]);
      }
      int ans=0;
      for(int i=0;i<n;i++)
      {
        ans+=val-A[i];
      }
      return ans;
}