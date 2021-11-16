// Write a function that takes an integer and returns the number of 1 bits it has.
int Solution::numSetBits(int A) {
    int total_ones = 0;
    while (A != 0) {
        A = A & (A-1);
        total_ones++;
    }
    return total_ones;
}