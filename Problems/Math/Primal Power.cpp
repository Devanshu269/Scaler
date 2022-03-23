// Problem Description

// "Primal Power" of an array is defined as the count of prime numbers present in it.

// Given an array of integers A of length N, you have to calculate its Primal Power.

//Mine apporach
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

//Complete Apporach
int Solution::solve(vector<int> &A) {
    int N = A.size();

    int countP = 0;
    for (int i = 0; i < N;i++){
        if(A[i] > 1){
            bool check = true;
            for (int j = 2; j * j<= A[i];j++){
                if(A[i] % j == 0){
                    check = false;
                }
            }
            if(check){
                countP++;
            }
        }
    }
    
    return countP;
}