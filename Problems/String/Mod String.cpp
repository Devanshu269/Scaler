You are given a huge number in the form of a string A where each character denotes a digit of the number.
You are also given a number B. You have to find out the value of A % B and return it.

int Solution::findMod(string A, int B) {
     long int res = 0;
 
    for (int i = 0; i < A.length(); i++)
        res = (res * 10 + (int)A[i] - '0') % B;
 
    return res;
}

//complete solution
int Solution::findMod(string A, int B) {
    long ans = 0;
    long mod = B;
    int n = A.size();
    long curr = 1;
    for(int i = n - 1; i >= 0; i--){
        long dig = A[i] - 48;
        long term = (dig * curr) % mod;
        ans = (ans + term) % mod;
        curr = (curr * 10) % mod;
    }
    return (int)ans;
}