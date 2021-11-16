// Given a matrix of integers A of size N x M and an integer B.
// In the given matrix every row and column is sorted in increasing order. Find and return the position of B in the matrix in the given form:
// If A[i][j] = B then return (i * 1009 + j)
// If B is not present return -1.
Method 1
int Solution::solve(vector<vector<int> > &A, int B) {
    int N = A.size();
    int M = A[0].size();
    if (N == 0)
        return -1;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++){
            if(A[i][j] == B)
        {
  
            return ((i+1)*1009+(j+1));
        }
        }   
    }
  
    return -1;

}

Method 2(This method will not work with matrix having duplicates elements)
int Solution::solve(vector<vector<int> > &A, int B) {
    int N = A.size();
    int M = A[0].size();
    int i=0, j=M-1, ans;
    while(i<N && j>=0){
        if(A[i][j]==B){
            ans = ((i+1)*1009)+(j+1);
            return ans;
        }
        if(A[i][j]>B){
            j--;
        }
        if(A[i][j]<B){
            i++;
        }
    }
    return -1;
}