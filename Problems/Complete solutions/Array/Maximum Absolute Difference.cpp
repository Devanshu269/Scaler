// Problem Description

// You are given an array of N integers, A1, A2, …. AN.

// Return the maximum value of f(i, j) for all 1 ≤ i, j ≤ N. 
// f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.


int Solution::maxArr(vector<int> &A) {
    int ans = 0, n = A.size(); 
    
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    
    for(int i = 0; i < n; i++){
        max1 = max(max1, A[i] + i);
        max2 = max(max2, A[i] - i);
        min1 = min(min1, A[i] + i);
        min2 = min(min2, A[i] - i);
    }   
    ans = max(ans, max2 - min2);
    ans = max(ans, max1 - min1);
    return ans;
}

