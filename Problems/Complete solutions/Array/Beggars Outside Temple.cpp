//Problem Description
// There are N (N > 0) beggars sitting in a row outside a temple. Each beggar initially has an empty pot. 
// When the devotees come to the temple, they donate some amount of coins to these beggars. Each devotee gives a 
// fixed amount of coin(according to his faith and ability) to some K beggars sitting next to each other.

// Given the amount donated by each devotee to the beggars ranging from i to j index, where 1 <= i <= j <= N, 
// find out the final amount of money in each beggar's pot at the end of the day, provided they don't fill their pots by any other means.
vector<int> Solution::totalCoins(int A, vector<vector<int> > &B) {
    vector<int> coins(A, 0);
    for(int i = 0; i < B.size(); i++) {
        int leftIndex = B[i][0] - 1, rightIndex = B[i][1] - 1; 
        int donationByDevotee = B[i][2];
        coins[leftIndex] += donationByDevotee;
        if ((rightIndex + 1) < A) coins[rightIndex + 1] -= donationByDevotee;
    }
    for(int i = 1; i < A; i++) coins[i] = coins[i] + coins[i - 1];
    return coins;
}