// Problem Description

// You are given an array of N integers, A1, A2, …. AN.

// Return the maximum value of f(i, j) for all 1 ≤ i, j ≤ N. 
// f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.


//optimize
int Solution::maxArr(vector<int> &A) {
    int N = A.size();
    if(N==1){
        return 0;
    }
    int sum1, sum2;
    int maxN= INT_MIN, minN=INT_MAX;
    int res;
    for(int i=0;i<N;i++){
            minN = min(A[i]+i,minN);
            maxN = max(A[i]+i,maxN);
        }

        sum1 = maxN - minN;
        maxN= INT_MIN, minN=INT_MAX;
        for(int j=0;j<N;j++){
            minN = min(A[j]-j,minN);
            maxN = max(A[j]-j,maxN);
            
        }
        sum2 = maxN - minN;

        res = max(sum1, sum2);
        return res;
}

// First of all lets make four equations by removing the absolute value signs 
// (“|”). The following 4 equations will be formed, and we need to find the maximum value 
// of these equations and that will be our answer. 

// arr[i] – arr[j] + i – j = (arr[i] + i) – (arr[j] + j)
// arr[i] – arr[j] – i + j = (arr[i] – i) – (arr[j] – j)
// -arr[i] + arr[j] + i – j = -(arr[i] – i) + (arr[j] – j)
// -arr[i] + arr[j] – i + j = -(arr[i] + i) + (arr[j] + j)
// Observe the equations (1) and (4) are identical. Similarly, equations (2) and (3) are identical.
// Now the task is to find the maximum value of these equations. So the approach is to form two arrays, 
// first_array[], it will store arr[i] + i, 0 <= i < n, second_array[], it will store arr[i] – i, 0 <= i < n. 

//Brute Force
int Solution::maxArr(vector<int> &A) {
    int N = A.size();
    if(N==1){
        return 0;
    }
    int sum;
    int res= INT_MIN;
    for(int i=0; i<N; i++){
        sum = 0;
        for(int j=0; j<N; j++){
            if(i != j){
                sum = abs(A[i] - A[j]) + abs(i-j);
                res = max(res, sum);
            }else{
                sum = 0;
                res = max(res,sum);
            }
        }
    }
    return res;
}

