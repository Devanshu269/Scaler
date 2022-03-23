/*Given an array A and an integer B. A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == B). Check if any good pair exist or not.*/

//My solution
int Solution::solve(vector<int> &A, int B) {
    int N = A.size();
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(A[i]+A[j]==B){
                return 1;
            }
        }
    }
    return 0;
    
}

//Complete Solution
int Solution::solve(vector<int> &A, int B){
    for (int i = 0; i < A.size(); ++i){
    	for(int j = 0; j < A.size(); ++j){
    		if(i == j)continue;
    		if(A[i] + A[j] == B) return 1;
    	}
    }
    return 0;
}