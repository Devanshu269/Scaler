// Given two integer array A and B of size N and M respectively. Your task is to find all the common elements in both the array.

// NOTE:

// Each element in the result should appear as many times as it shows in both arrays.
// The result can be in any order.

vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    int n = A.size(), m = B.size();
    unordered_map<int,int> hashmap;
    for(int i = 0 ; i < n; i++){
        hashmap[A[i]] ++;
        assert(A[i] >= 1 && A[i] <= 1e9);
    }
    vector<int> ans;
    for(int i = 0; i < m; i++){
        if(hashmap.find(B[i]) != hashmap.end() && hashmap[B[i]] != 0){
            ans.push_back(B[i]);
            hashmap[B[i]]--;
        }
    }
    return ans;
}