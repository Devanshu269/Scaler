Problem Description

Given an array of integers A, find and return whether the given array contains a non-empty subarray with a sum equal to 0.

If the given array contains a sub-array with sum zero return 1 else return 0.

int Solution::solve(vector<int> &A) {
    unordered_set<long> sumSet;
    long long int sum = 0;
    int n=A.size();
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
 
        if (sum == 0 || sumSet.find(sum) != sumSet.end()){
                        return 1;
        }else{
                    sumSet.insert(sum);
        }

    }
    // if(n > sumSet.size()){
    //     return 1;
    // }
    return 0;
}