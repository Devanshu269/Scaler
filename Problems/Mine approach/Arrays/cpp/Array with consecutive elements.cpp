// Given an array of positive integers A, check and return whether the array elements are consecutive or not.
// NOTE: Try this with O(1) extra space.
int Solution::solve(vector<int> &A) {
    int N = A.size();
    vector<int> B;
    sort(A.begin(), A.end());

    //METHOD 1 TC(NlogN)
    int i = 1;
    while(i < N){
        if(A[i]-A[i-1] != 1){
            return 0;
        }
        i++;
    }
    return 1;

           
    //Method 2 TC(N)
    for(int i=1;i<N;i++){
        if(A[i]-A[i-1] != 1){
            return 0;
        }
    }
    return 1;
}
