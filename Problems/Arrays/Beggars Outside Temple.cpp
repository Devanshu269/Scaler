//Problem Description
// There are N (N > 0) beggars sitting in a row outside a temple. Each beggar initially has an empty pot. 
// When the devotees come to the temple, they donate some amount of coins to these beggars. Each devotee gives a 
// fixed amount of coin(according to his faith and ability) to some K beggars sitting next to each other.

// Given the amount donated by each devotee to the beggars ranging from i to j index, where 1 <= i <= j <= N, 
// find out the final amount of money in each beggar's pot at the end of the day, provided they don't fill their pots by any other means.
vector<int> Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> D;
    for(int i=0; i<A; i++){
        D.push_back(0);
    }
    int N = B.size();
    for(int i=0; i<N; i++){
        int S = B[i][0]-1;
        int E = B[i][1]-1;
        int X = B[i][2];
        D[S] += X;
        if(E < A-1){
            D[E+1] -= X;
        }
    }
    for(int i=1; i<A; i++){
        D[i] = D[i-1] + D[i];
    }
    return D;
}