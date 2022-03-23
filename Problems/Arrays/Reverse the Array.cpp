//Problem Description

//You are given a constant array A.

//You are required to return another array which is the reversed form of input array.

vector<int> Solution::solve(const vector<int> &A) {
    vector<int> D;
    int N = A.size();
    for(int j=N-1; j>=0; j--){
        D.push_back(A[j]);
    }
    
    return D;
}