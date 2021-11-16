// You are given an integer array A having N integers.

// You have to construct and return an array containing all the adjacent / consecutive element differences (A[i + 1] - A[i]) in the same order.
vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int sum=0;
    vector<int> B;
    for(int i=0; i<n-1; i++){
        sum = A[i+1]-A[i];
        B.push_back(sum);
    }
    return B;

}