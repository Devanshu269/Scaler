// Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, 
// with the colors in the order red, white and blue.Here, we will use the integers 0, 1, and 2 to represent the color red, 
// white, and blue respectively.

// Note: Using library sort function is not allowed.

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


//complete solution


    vector<int> Solution::sortColors(vector<int> &A)  {     
            int n = A.size(); 
            int k = n - 1;
            int i = 0;
            for (; i < n; ++i)
            {
                if (A[i] != 0)
                {
                    break;
                }
            }

            int j = i;
            for (; i <= k; ++i)
            {
                if (A[i] == 0)
                {
                    swap(A[j++], A[i]);
                }
                else if (A[i] == 2)
                {
                    swap(A[i--], A[k--]);
                }
            }
        return A;
    }