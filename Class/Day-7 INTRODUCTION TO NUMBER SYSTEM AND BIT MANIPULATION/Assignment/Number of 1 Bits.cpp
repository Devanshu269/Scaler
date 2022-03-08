//Write a function that takes an integer and returns the number of 1 bits it has.

/*My Apporach:- since we know that for a number N N&(N-1) will unset the right most bit from left side thus we can loop it the that number become 0 
                and count the number of times that the loop will run then return count as final ans*/
int Solution::numSetBits(int A) {
    int count = 0;
    while (A != 0) {
        A = A & (A-1);
        count++;
    }
    return count;
}


//complete solution
int Solution::numSetBits(int A) {
    int total_ones = 0;
    while (A != 0) {
        A = A & (A-1);
        total_ones++;
    }
    return total_ones;
}