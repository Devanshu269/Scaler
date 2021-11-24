// Problem Description

// Given an array, arr[] of size N, the task is to find the count of array indices such that removing an 
// element from these indices makes the sum of even-indexed and odd-indexed array elements equal.
int Solution::solve(vector<int> &A) {
    int N = A.size();
    vector<int> PSE;
    vector<int> PSO;
    int count = 0;
    PSE.push_back(A[0]);
    for(int i=1; i<N; i++){
        if(i%2==0){
            PSE.push_back(PSE[i-1]+A[i]);
        }else{
            PSE.push_back(PSE[i-1]);
        }
    }
    PSO.push_back(0);
    for(int i=1; i<N; i++){
        if(i%2!=0){
            PSO.push_back(PSO[i-1]+A[i]);
        }else{
            PSO.push_back(PSO[i-1]);
        }
    }
    int SumEven, SumOdd;
    for(int i=0; i<N; i++){
        if(i==0){
            SumEven = PSO[N-1]-PSO[i+1];
            SumOdd = PSE[N-1]-PSE[i+1];
        }else if(i == (N-1)){
            SumEven = PSE[i-1] - PSE[0];
            SumOdd = PSO[i-1] - PSO[0];
        }else{
            SumEven = PSE[i-1] + (PSO[N-1] - PSO[i]);
            SumOdd = PSO[i-1] + (PSE[N-1] - PSE[i]);
        }
        if(SumOdd == SumEven){
            count++;
        }
    }
    return count;

}