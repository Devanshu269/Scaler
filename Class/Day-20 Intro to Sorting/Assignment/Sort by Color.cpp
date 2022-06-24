// Problem Description
// Given an array with N objects colored red, white, or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent red, white, and blue, respectively.

// Note: Using the library sort function is not allowed.

vector<int> Solution::sortColors(vector<int> &A) {
        int N = A.size();
    vector<int> ans;
    for(int i=0; i<N; i++){
        if(A[i]==0){
            ans.push_back(A[i]);
        }
    }
    for(int i=0; i<N; i++){
        if(A[i]==1){
            ans.push_back(A[i]);
        }
    }
    for(int i=0; i<N; i++){
        if(A[i]==2){
            ans.push_back(A[i]);
        }
    }
    return ans;
}
