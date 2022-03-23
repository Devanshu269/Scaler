//Given an array of integers A, update every element with multiplication of previous and next elements 
// with following exceptions. a) First element is replaced by multiplication of first and second. 
//b) Last element is replaced by multiplication of last and second last.

vector<int> Solution::solve(vector<int> &A) {
    int N=A.size();
    int prev = A[0];
    A[0] = A[0] * A[1];
    for (int i=1; i<N-1; i++)
    {
        int curr = A[i];
        A[i] = prev * A[i+1];
        prev = curr;
    }
    A[N-1] = prev * A[N-1];
    return A;
}
