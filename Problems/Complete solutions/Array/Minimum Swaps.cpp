Problem Description

Given an array of integers A and an integer B, find and return the minimum number of swaps required to bring all the 
numbers less than or equal to B together.

Note: It is possible to swap any two elements, not necessarily consecutive.
int Solution::solve(vector<int> &A, int B) {
    int N = A.size();
    int count=0, ans;
    for(int i=0; i<N; i++){
        if(A[i] <= B){
            count++;
        }
    }
    if(count <= 1){
        return 0;
    }
    else{
        int l=0,r=0,x=0;
        while(r<count){
            if(A[r]>B){
                x++;
            }
            r++;
        }
        ans = x;
        while(r<N){
            if(A[r]>B){
                x++;
            }
            if(A[l]>B){
                x--;
            }
            ans = min(ans, x);
            r++;
            l++;
        }
        
    }
    return ans;
}
