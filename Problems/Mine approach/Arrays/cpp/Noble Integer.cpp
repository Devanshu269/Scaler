// Problem Description

// Given an integer array A, 
// find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.


// Brute Force (TLE)
int Solution::solve(vector<int> &A) {
    int N = A.size();
    for (int i = 0; i < N; i++ )
    {
        int count = 0;
        for (int j = 0; j < N; j++)
            if (A[i] < A[j])
                count++;

        if (count == A[i])
            return 1;
    }
     
    return -1;
}



//Optimal
int Solution::solve(vector<int> &A) {
    int N = A.size();
    sort(A.begin(), A.end());
    for(int i=0; i<N; i++){
        while(i+1<N && A[i]==A[i+1])
			i++;
        if(A[i]==(N-1-i)){
            return 1;
        }
    }
    return -1;
}