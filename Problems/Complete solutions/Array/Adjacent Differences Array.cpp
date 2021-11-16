// You are given an integer array A having N integers.

// You have to construct and return an array containing all the adjacent / consecutive element differences (A[i + 1] - A[i]) in the same order
vector<int> Solution::solve(vector<int> &A) {
    int N = A.size();
    
    vector<int> ans;
    
    for (int i = 0; i < N - 1;i++){
        ans.push_back(A[i + 1] - A[i]);
    }
    
    return ans;
}