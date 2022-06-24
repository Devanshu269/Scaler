// Problem Description
// You are given a 2D integer matrix A, make all the elements in a row or column zero if the A[i][j] = 0. 
// Specifically, make entire ith row and jth column zero.

vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    int N= A.size(), M = A[0].size();
    int Row[N];
    int Col[M];
    for(int i=0;i<N;i++)
        Row[i]=1;

    for(int i=0;i<M;i++)
        Col[i]=1;
        
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(A[i][j] == 0){
                Row[i] = 0;
                Col[j] = 0;
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(A[i][j] != 0){
                if(Row[i]==0 || Col[j]==0){
                    A[i][j] = 0;
                }
            }
        }
    }
    return A;
}
