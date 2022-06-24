// Problem Description
// Given an integer A, find and return the Ath magic number.

// A magic number is defined as a number that can be expressed as a power of 5 or a sum of unique powers of 5.

// First few magic numbers are 5, 25, 30(5 + 25), 125, 130(125 + 5), ….

int Solution::solve(int A) {
    int sum = 0;
    int x=1;

    while(A>0){
        x = x*5;
        if(A%2==1){
            sum += x;
        }
        A/=2;
    }
    return sum;
}