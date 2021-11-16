// You are given T(number of test cases) integer arrays. For each array A, you have to find the value of absolute
//  difference between the counts of even and odd elements in the array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    
    int T;
    cin >> T ;
    for(int t=0; t<T; t++){
        int N = 0;
        cin >> N;
        vector<int> A(N);
        for(int n=0; n<N; n++){
            cin >> A[n];
        }
   
        int countEven = 0;
        int countOdd = 0;
        
         for(int i=0; i<N; i++){
        if((A[i]^1) == (A[i]+1)){
            countEven++;
        }else{
            countOdd++;
        }
    }
     cout << abs(countEven - countOdd) << endl;
    }
    
   
   
   
}