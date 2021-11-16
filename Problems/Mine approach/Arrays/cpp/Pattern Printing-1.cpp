// Print a Pattern According to The Given Value of A.

// Example: For A = 3 pattern looks like:

// 1 0 0

// 1 2 0

// 1 2 3
vector<vector<int> > Solution::solve(int A) {
    int no_of_cols = A;
    int no_of_rows = A;
    int initial_value = 0;
    vector<vector<int>> B;
    B.resize(no_of_rows, vector<int>(no_of_cols, initial_value));

    
    for(int i=0; i<A; i++){
        for(int j=0; j<=i; j++){
            B[i][j] = j + 1;
        }
        for(int j=i+1; j<A; j++){
            B[i][j] = 0;
       }
    }
    return B;
       
}