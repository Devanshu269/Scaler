/* You are given an Array A of size N.
 Find for how many elements, there is a strictly smaller element and a strictly greater element.*/

/* My Approach:- so we have to find number of strictly smaller and greater number that means number of element which is greater than the smallest element 
                 and smaller than the largest element in the array, So simply sort the array we will get the smallest at the 0th posi and largest at N-1 posi
                 then run a loop and find the number of element which is greater than the smallest element and smaller than the largest element in the array and in the
                 last return the count*/
int Solution::solve(vector<int> &A) {
    int count = 0;
    int N = A.size();
    int end =  N-1;
    sort(A.begin(), A.end());
    for(int i=1; i<N-1; i++){
        if(A[0]<A[i] && A[i]<A[end]){
            count++;
        }
    }
    return count;
    
}

// Complete Solution:-
int Solution::solve(vector<int> &A) {
    int ans = 0;
    // initialize the smallest and greatest element
    int mini = 1e9, maxi = -1e9;
    // find smallest and greatest element
    for(auto &i : A) {
        mini = min(mini, i);
        maxi = max(maxi, i);
    }
    // count the required elements
    for(auto &i : A) {
        if(mini < i and i < maxi)
            ans += 1;
    }
    // return the answer
    return ans;
}