// Problem Description

// Given a vector A of non-negative integers representing an elevation map where the width 
// of each bar is 1, compute how much water it is able to trap after raining.
int Solution::trap(const vector<int> &A) {
    int n=A.size();
    int left = 0; int right = n - 1;
    int res = 0;
    int maxleft = 0, maxright = 0;
    while(left <= right){
        if(A[left] <= A[right]){
            if(A[left] >= maxleft) 
                maxleft = A[left];
            else 
                res += maxleft-A[left];
            left++;
        }
        else{
            if(A[right] >= maxright) 
                maxright = A[right];
            else 
                res += maxright - A[right];
            right--;
        }
    }
    return res;
}