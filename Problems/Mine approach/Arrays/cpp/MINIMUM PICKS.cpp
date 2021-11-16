// You are given an array of integers A of size N.
// Return the difference between the maximum among all even numbers of A and the minimum among all odd numbers in A.
int Solution::solve(vector<int> &A) {
    int N = A.size();
    int minOdd = INT_MAX;
    int maxEven = INT_MIN;
    for(int i=0; i<N; i++){
        if(A[i]%2 == 0){
            if(A[i] > maxEven){
                maxEven = A[i]; 
            }
        }else{
            if(A[i] < minOdd ){
                minOdd = A[i];
            }
        }
    }
    return maxEven - minOdd;
}