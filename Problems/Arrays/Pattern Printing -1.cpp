/*Print a Pattern According to The Given Value of A.

Example: For A = 3 pattern looks like:

1 0 0

1 2 0

1 2 3*/

/*My Apporach:- */
vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans(A);
    for(int i=1; i<=A; i++){
        for(int j=1; j<=i; j++){
            ans[i-1].push_back(j);
        }
        for(int j = i + 1; j <= A; j++){
             ans[i - 1].push_back(0);
        }
    }
    return ans;
}

//Complete solution
vector<vector<int> > Solution::solve(int A) {
    vector< vector< int > > ans(A);
    for(int i = 1; i <= A; i++) {
        for(int j = 1; j <= i; j++)
            ans[i - 1].push_back(j);
        for(int j = i + 1; j <= A; j++)
            ans[i - 1].push_back(0);
    }
    return ans;
}