// Problem Description
// Give a N * N square matrix A, return an array of its anti-diagonals. Look at the example for more details.

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> result;
    vector<int> diagonal;
    
    int n = A.size();
    if(n == 0)
        return result;
    for(int d = 0; d <= 2*(n-1); d++) {
       for(int i = 0; i <= d; i++) {
           int j = d - i;
           if(i >= n || j >= n){
                continue;
           }
           diagonal.push_back(A[i][j]);
    
       }
       for(int j=d; j<n-1 || diagonal.size() < n; j++){
                 diagonal.push_back(0);
           }
           
       result.push_back(diagonal);
       diagonal.clear();
   }
   return result;
}