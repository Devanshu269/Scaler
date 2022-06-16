// Given an array of integers A and multiple values in B, which represents the number of times array 
// A needs to be left rotated.

// Find the rotated array for each value and return the result in the from of a matrix where ith row 
// represents the rotated array for the ith value in B.

vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {
    vector<vector<int>> ans;
    for(int i = 0; i < B.size(); ++i){
        
        vector< int > temp;
        int ind = B[i]%A.size() ;
        for(int j = ind; j < A.size(); ++j)
            temp.push_back(A[j]);
        for(int j = 0 ; j < ind; ++j)
            temp.push_back(A[j]);
        ans.push_back(temp);
    }
    return ans;
}