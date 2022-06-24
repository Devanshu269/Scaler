// Problem Description
// You are given a large number in the form of a string A where each character denotes a digit of the number.
// You are also given a number B. You have to find out the value of A % B and return it.

int Solution::findMod(string A, int B) {
     long int res = 0;
 
    for (int i = 0; i < A.length(); i++)
        res = (res * 10 + (int)A[i] - '0') % B;
 
    return res;
}
