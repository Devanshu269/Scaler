/*Given an integer array A of size N. In one second, you can increase the value of one element by 1.

Find the minimum time in seconds to make all elements of the array equal.*/

//My solution
/*since we have to make ever element equal by add to them so we need to find the largest element since we are going to make every element equal to that, then since 
we can add 1 value at a time so we have to find the difference of each element with the largest element that difference will be the number of times we will adding 
1 to that number to make it equal to the largest number*/
int Solution::solve(vector<int> &A) {
    int N = A.size();
    int count = 0, time = 0;
    sort(A.begin(), A.end());
    for(int i=0; i<N-1; i++){
        if(A[i] != A[N-1]){
            count = A[N-1]-A[i];
            time = time + count;
        }
    }
    return time;
}

//Complete solution
int Solution::solve(vector<int> &A) {
    int n=A.size();
      int val=0;
      for(int i=0;i<n;i++)
      {
        val=max(val,A[i]);
      }
      int ans=0;
      for(int i=0;i<n;i++)
      {
        ans+=val-A[i];
      }
      return ans;
}