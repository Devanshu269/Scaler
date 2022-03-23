/*You are given an array of distinct integers A, you have to find and return all elements in array which have at-least two greater elements than themselves.
NOTE: The result should have the order in which they are present in the original array.*/

/*My apporach:- so simply find the largest and 2nd largest element then store all the elements in a array which are smaller than these two number*/
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

//Complete solution
vector<int> Solution::solve(vector<int> &A) {
    int N = A.size();
    int firstGreatest = INT_MIN;
    int secondGreatest = INT_MIN;
    for(int i = 0; i < N; i++){
        if(A[i] > firstGreatest){
            secondGreatest = firstGreatest;
            firstGreatest = A[i];
        }
        else if(A[i] > secondGreatest){
            secondGreatest = A[i];
        }
    }
    
    vector<int> res;
    for(int i = 0; i < N; i++){
        if(A[i] != secondGreatest && A[i] != firstGreatest){
            res.push_back(A[i]);
        }
    }
    return res;
}