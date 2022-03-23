// Problem Description

// Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.
vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> ans(A, vector<int> (A));
    int d=0, count=1;
    int T=0, R=A-1, B=A-1, L=0;
    while((T<=B) && (R>=L)){
        if(d==0){
        for(int i=L; i<=R; i++){
            ans[T][i] = count;
            count++;
    }
    d=1;
    T++;
    
    }
    else if(d==1){
            for(int i=T; i<=B; i++){
            ans[i][R] = count;
            count++;
    }
    d=2;
    R--;
    
    }
    else if(d==2){
        for(int i=R; i>=L; i--){
             ans[B][i] = count;
            count++;
    }
    d=3;
    B--;
    
    }
    else if(d==3){
        for(int i=B; i>=T; i--){
            ans[i][L] = count;
            count++;
    }
    d=0;
    L++;
    
        }
    }
    return ans;
     
}