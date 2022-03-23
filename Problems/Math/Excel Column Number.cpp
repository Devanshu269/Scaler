// Problem Description

// Given a column title as appears in an Excel sheet, return its corresponding column number.

//Mine apporach
int Solution::titleToNumber(string A) {
    int N = A.length();
    int res;
    for(int i=0; i<N; i++){
        res = res * 26 + (A[i] - 'A' + 1);
    }
    return res;
}

//complete Apporach
int Solution::titleToNumber(string A) {
    int r=0;
    int i;
    for(i=0; A[i]; i++) {
        	r = r * 26 + A[i] - 64;
    }
    return r;
}