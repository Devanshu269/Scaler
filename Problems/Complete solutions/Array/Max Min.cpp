// Given an array A of size N. 
// You need to find the sum of Maximum and Minimum element in the given array.

// NOTE: You should make minimum number of comparisons.

struct node
{
  int min;
  int max;
};

struct node getMinMax(vector<int> &A, int low, int high){
    struct node minmax, mml, mmr;
    int mid;

    /* If there is only on element */
    if (low == high){
        minmax.max = A[low];
        minmax.min = A[low];
        return minmax;
    }

    /* If there are two elements */
    if (high == low + 1){
        if (A[low] > A[high]){
            minmax.max = A[low];
            minmax.min = A[high];
        }
        else{
            minmax.max = A[high];
            minmax.min = A[low];
         }
         return minmax;
    }

    /* If there are more than 2 elements */
    mid = (low + high)/2;
    mml = getMinMax(A, low, mid);
    mmr = getMinMax(A, mid+1, high);

    /* compare minimums of two parts*/
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    /* compare maximums of two parts*/
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;
}

int Solution::solve(vector<int> &A) {
    int n = A.size();
    struct node ans = getMinMax(A, 0, n-1);
    int res = ans.max + ans.min;
    return res;
}