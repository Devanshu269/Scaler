// You are given an Array A of size N.

// Find for how many elements, there is a strictly smaller element and a strictly greater element.
int Solution::solve(vector<int> &A) {
    int count = 0;
    int N = A.size();
    int end =  N-1;
    sort(A.begin(), A.end());
    for(int i=1; i<N-1; i++){
        if(A[0]<A[i] && A[i]<A[end]){
            count++;
        }
    }
    return count;
    
}
