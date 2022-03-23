// Problem Description

// Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
// You may assume that the array is non-empty and the majority element always exist in the array.

//Brute force Apporach
int Solution::majorityElement(const vector<int> &A) {
int N = A.size();
int maxCount=0;
int count, index;
for(int i=0; i<N; i++){
    count=0;
    for(int j=0; j<N; j++){
        if(A[i]==A[j]){
            count++;
        }
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
}
if (maxCount > N/2){
    return A[index];
}

}

//O(N) Aporach
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
            candidate = A[i];
            index = i;
            count = 1;
        }
    }
    return A[index];

}

// Using Hash Map
int Solution::majorityElement(const vector<int> &A) {
    int N = A.size();
    int maxCount = N/2;
    unordered_map<int, int> Amap;
    for(int i=0; i<N; i++){ 
            Amap[A[i]]++;
    }
    for(int i=0; i<N; i++){
        if(Amap[A[i]]>maxCount){
           return A[i];
       }
    }


}