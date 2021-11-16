// "Primal Power" of an array is defined as the count of prime numbers present in it.

// Given an array of integers A of length N, you have to calculate its Primal Power.


int checkPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
  
    return 1;
}
int Solution::solve(vector<int> &A) {
    int isprime = 0;
    int n = A.size();
    int count=0;
    for (int i = 0; i < n; i++){
        isprime = checkPrime(A[i]);
        if (isprime == 1){
            count++;
        }
            
    } 
        return count;
}