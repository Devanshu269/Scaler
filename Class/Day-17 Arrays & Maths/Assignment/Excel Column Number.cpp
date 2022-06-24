// Problem Description
// Given a column title as appears in an Excel sheet, return its corresponding column number.

int Solution::titleToNumber(string A) {
    int N = A.length();
    int res;
    for(int i=0; i<N; i++){
        res = res * 26 + (A[i] - 'A' + 1);
    }
    return res;
}