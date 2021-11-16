// Write a program to find the factorial of the given number A.


int fact(int N){
    if(N==0){
        return 1;
    }
    return N*fact(N-1);
}
int Solution::solve(int A) {
        return fact(A);
}