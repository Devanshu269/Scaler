/*You are given an array of integers A of size N.
Return the difference between the maximum among all even numbers of A and the minimum among all odd numbers in A.*/

/*My Apporach:- so loop through all the elements and check if the number is even then check the largest even element and if its odd check for smallest odd number then at the 
                end return the difference of those numbers.*/
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

//Complete solution
int Solution::solve(vector < int > &A) {
  int n = A.size();
  int val1 = INT_MIN, val2 = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (A[i] % 2 == 0) {
      val1 = max(val1, A[i]);
    } else {
      val2 = min(val2, A[i]);
    }
  }
  assert(val1 != INT_MIN);
  assert(val2 != INT_MAX);
  return val1 - val2;
}