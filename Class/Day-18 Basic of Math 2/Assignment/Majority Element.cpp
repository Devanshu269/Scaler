// Problem Description
// Given an array of size N, find the majority element. The majority element is the element that appears more than floor(n/2) times.
// You may assume that the array is non-empty and the majority element always exists in the array.

int Solution::majorityElement(const vector<int> &A) {
    int N = A.size();
    int candidate = A[0];
    int count = 1;
    int index = 0;
    for(int i=1; i<N; i++){
        if(candidate == A[i]){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            candidate = A[index+1];
            index = index+1;
            count = 1;
        }
    }
    return A[index];

}
