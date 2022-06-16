// "Primal Power" of an array is defined as the count of prime numbers present in it.

// Given an array of integers A of length N, you have to calculate its Primal Power.


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