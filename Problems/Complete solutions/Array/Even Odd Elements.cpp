// You are given T(number of test cases) integer arrays. For each array A, you have to find the value of absolute
//  difference between the counts of even and odd elements in the array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int T;
    cin >> T;
    
    while (T--){
        int N;
        cin >> N;
        
        int cnte = 0;
        int cnto = 0;
        int A[N];
        for (int i = 0; i < N;i++){
            cin >> A[i];
            
            if(A[i] % 2 == 1){
                cnto++;
            }
            else{
                cnte++;
            }
        }
        cout << abs(cnte - cnto) << "\n";
    }
    return 0;
}