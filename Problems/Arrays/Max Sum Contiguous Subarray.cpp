// Find the contiguous non-empty subarray within an array, A of length N, with the largest sum.
int Solution::maxSubArray(const vector<int> &A) {
    int max_sum = INT_MIN;
    int cuu_sum = 0;
    for(int i=0; i<A.size(); i++){
        cuu_sum += A[i];
        max_sum = max(max_sum, cuu_sum);
        if(cuu_sum < 0){
            cuu_sum = 0;
        }
    }
    return max_sum;
}