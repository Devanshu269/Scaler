// Problem Description
// Given three 2-digit integers, A, B, and C, find out the minimum number obtained by concatenating them in any order.

// Return the minimum result obtained.

int Solution::solve(int A, int B, int C) {
    int minV,midV,maxV;
    midV = A+B+C;
    minV = min(A, B);
    minV = min(minV, C);
    maxV = max(A, B);
    maxV = max(maxV, C);
    midV = abs(midV - minV - maxV);
    int sum;
    minV = 10000 * minV;
    midV = 100 * midV;
    sum = minV + midV + maxV;
    return sum;
}
