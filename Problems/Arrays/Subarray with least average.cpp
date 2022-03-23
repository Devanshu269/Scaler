//Problem Description
//Given an array of size N, Find the subarray with least average of size k.

//3 method are there

//optimal 
int Solution::solve(vector<int> &A, int B) {
    int N = A.size();
    if (N < B)
        return -1;
    int res_index = 0;
 
    int curr_sum = 0;
    for (int i = 0; i < B; i++){
        curr_sum += A[i];
    }
        
    int min_sum = curr_sum;

    for (int i = B; i < N; i++) {

        curr_sum += A[i] - A[i - B];

        if (curr_sum < min_sum) {
            min_sum = curr_sum;
            res_index = (i - B + 1);
        }
    }
    return res_index;
}

//using prefix sum
int Solution::solve(vector<int> &A, int B) {
    int N = A.size();
    if (N < B){
        return -1;
    }
    int res_index = 0;
    int PS[N];
    for(int i=0; i<N; i++){
        if(i==0){
            PS[0]=A[0];
        }else{
            PS[i] = PS[i-1] + A[i];
        }
    }
    int Lavg = PS[B-1];
    res_index = 0;
    int cuu_avg = 0;
    for(int i=1; i<=N-B; i++){
        cuu_avg = PS[i+B-1]-PS[i-1];
        if(cuu_avg < Lavg){
            Lavg = cuu_avg;
            res_index = i;
        }
    }
    return res_index;
 
}

//Brute force(TLE)
int Solution::solve(vector<int> &A, int B) {
    int N = A.size();
    int index;
    for(int i=0; i<=N-B; i++){
        int s = i, e = B+i-1;
        int sum=0;
        int MinAvg = INT_MAX;
        for(int j=s; j<=e; j++){
            sum = sum + A[j];
        }
        if(sum<MinAvg){
            MinAvg = sum;
            index = i-1;
        }
    }
    return index;
}



