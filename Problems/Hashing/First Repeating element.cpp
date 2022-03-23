// Problem Description

// Given an integer array A of size N, find the first repeating element in it.

// We need to find the element that occurs more than once and whose index of first occurrence is smallest.

// If there is no repeating element, return -1.

int Solution::solve(vector<int> &A) {
    map<int, int> Amap;
    int N = A.size();
    for(int i=0; i<N; i++){
        auto it = Amap.find(A[i]);
        if(it == Amap.end()){
            Amap.insert({A[i], 1});
        }else{
            Amap[A[i]]++;
        }

    }
    for(int i=0; i<N; i++){
        if(Amap[A[i]]>1){
           return A[i];
       }
    }
    return -1;
}

