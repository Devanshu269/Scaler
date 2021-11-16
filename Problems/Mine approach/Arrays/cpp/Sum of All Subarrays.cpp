// Problem Description
// You are given an integer array A of length N.
// You have to find the sum of all subarray sums of A.
// More formally, a subarray is a defined as a contiguous part of an array,
// which we can obtain by deleting zero or more elements from either end of the array.
// A subarray sum denotes the sum of all the elements of that subarray.


//optimal
long Solution::subarraySum(vector<int> &A) {
    int N = A.size();
    long TotalSum = 0;
    for(int i=0; i<N; i++){
        int s = (i+1), e = (N-i);
        TotalSum = TotalSum + ((long)A[i] * s * e);
    }
    return TotalSum;
}



//Brute force(TLE)
long Solution::subarraySum(vector<int> &A) {
    int N = A.size();
    int TotalSum = 0, sum =  0;
    for(int i=0; i<N; i++){
        sum =  0;
        for(int j=i; j<N; j++){
            sum = sum + A[j];
            TotalSum += sum;
        }
    }
    return TotalSum;
}