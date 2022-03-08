/*Given an array of integers A, every element appears twice except for one. Find that integer which occurs once.

NOTE: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?*/

/*My Apporach:- so as we know sum of A^A = 0 then we will take XOR of all the elements in the array and we will get the reqiured element*/
int Solution::singleNumber(const vector<int> &A) {
    int N = A.size();
    int ans = A[0];
    for(int i=1; i<N; i++){
        ans = ans ^ A[i];
    }
    return ans;
}

//Complete solution
int Solution::singleNumber(const vector < int > & A) {
    int n = A.size();
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= A[i];
    }
    return result;
}
