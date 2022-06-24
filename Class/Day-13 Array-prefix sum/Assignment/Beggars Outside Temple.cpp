// Problem Description
// There are A beggars sitting in a row outside a temple. Each beggar initially has an empty pot. When the devotees come to the temple, 
// they donate some amount of coins to these beggars. Each devotee gives a fixed amount of coin(according to their faith and ability) to some 
// K beggars sitting next to each other.

// Given the amount P donated by each devotee to the beggars ranging from L to R index, where 1 <= L <= R <= A, find out the final amount of 
// money in each beggar's pot at the end of the day, provided they don't fill their pots by any other means.
// For ith devotee B[i][0] = L, B[i][1] = R, B[i][2] = P, Given by the 2D array B

vector<int> Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> coins(A, 0);
    for(int i = 0; i < B.size(); i++) {
        int leftIndex = B[i][0] - 1, rightIndex = B[i][1] - 1; 
        int donationByDevotee = B[i][2];
        coins[leftIndex] += donationByDevotee;
        if (rightIndex < A-1) 
            coins[rightIndex + 1] -= donationByDevotee;
    }
    for(int i = 1; i < A; i++) 
        coins[i] = coins[i] + coins[i - 1];
    return coins;

}