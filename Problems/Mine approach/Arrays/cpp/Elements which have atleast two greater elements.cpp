// You are given an array of distinct integers A, you have to find and return all elements in array which have at-least two greater elements than themselves.

// NOTE: The result should have the order in which they are present in the original array.
vector<int> Solution::solve(vector<int> &A) {
    int N = A.size();
    vector<int> B;
    int Max1st = INT_MIN;
    int Max2nd = INT_MIN;
    for(int i = 0; i < N; i++){
        if(A[i] > Max1st){
            Max2nd = Max1st;
            Max1st = A[i];
        }
        else if(A[i] > Max2nd){
            Max2nd = A[i];
        }
    }
    for(int i = 0; i < N; i++){
        if(A[i] != Max2nd && A[i] != Max1st){
            B.push_back(A[i]);
        }
    }
    return B;
}
//Aporach -> first we will search for the largets maximun and 2nd largets maximun
        //-> then we will comapre these to with all the array elements and store the values in a different array which doesnt match those values
        