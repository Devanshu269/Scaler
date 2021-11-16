// Problem Description

// Given an array of integers A and multiple values in B which represents number of times array A needs to be left rotated.

// Find the rotated array for each value and return the result in the from of a matrix where 
// i'th row represents the rotated array for the i'th value in B.
vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {
    vector<vector<int>> C;
    vector<int> D;
    int N= A.size();
    int M= B.size();
    int k=0;
    while(k<M){
        for(int l=0; l<N; l++){
        D.push_back(A[l]);
    }
        for(int i=0; i<B[k]; i++){
        int j, first;
         first = D[0];        
        for(j = 0; j < N-1; j++){   
            D[j] = D[j+1]; 
        }  
        D[j] = first; 
    }
    k++;
    C.push_back(D);
    D.clear();
    }
    return C;
}
