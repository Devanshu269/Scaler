// Given an array of integers A, every element appears twice except for one. Find that single one
int Solution::singleNumber(const vector < int > & A) {
    int n = A.size();
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= A[i];
    }
    return result;
}