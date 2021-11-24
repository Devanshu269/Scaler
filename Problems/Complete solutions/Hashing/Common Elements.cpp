// Given two integer array A and B of size N and M respectively. Your task is to find all the common elements in both the array.

// NOTE:

// Each element in the result should appear as many times as it shows in both arrays.
// The result can be in any order.

vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    unordered_map<int, int> Amap;
    vector<int> C;
    int N = A.size();
    int M = B.size();
    for(int i=0; i<N; i++){ 
            Amap[A[i]]++;
    }
    for(int i=0; i<M; i++){
       if(Amap[B[i]] != 0){
           C.push_back(B[i]);
           Amap[B[i]]--;
       }
    }
    sort(C.begin(), C.end());
    return C;
}