// Problem Description

// Given a vector A of non-negative integers representing an elevation map where the width 
// of each bar is 1, compute how much water it is able to trap after raining.
int Solution::trap(const vector<int> &A) {
    int N = A.size();
    int Lmax[N];
    int Rmax[N];
    int maxN = INT_MIN;
    for(int i=0; i<N; i++){
        // Lmax.push_back(max(maxN, A[i]));
        // maxN = Lmax[i];
        Lmax[i] = max(maxN, A[i]);
        maxN = Lmax[i];
    }
    maxN = INT_MIN;
    for(int i=N-1; i>=0; i--){
        // int ins = max(maxN, A[i]);
        // Rmax[i].push_back(ins);
        Rmax[i] = max(maxN, A[i]);
        maxN = Rmax[i];
    }
    int res = 0;
    for(int i=0; i<N; i++){
        res += min(Lmax[i], Rmax[i]) - A[i];
    }
    return  res;
}
