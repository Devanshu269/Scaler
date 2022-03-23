// Write a recursive function that checks whether a string A is a palindrome or Not.
// Return 1 if the string A is palindrome, else return 0.

// Note: A palindrome is a string that's the same when reads forwards and backwards.

int checkPali(string &s, int start, int end){
    if(start >= end)
    {
        return 1;
    }
    else
    {
        if(s[start]==s[end])
        {
            return checkPali(s,start+1,end-1); 
        }
        else
        {
            return 0;
        }
    }
}
int Solution::solve(string A) {
    int N = A.size();
    int st = 0;
    int end = N-1;
    return checkPali(A, st, end);
    
}

//Complete Aporach
int checkpalindrome(string &A, int i, int j){
    if(i >= j){
        return 1;
    }
    if(A[i] == A[j]){
        return checkpalindrome(A, i+1, j-1);
    }
    return 0;
}

int Solution::solve(string A) {
    return checkpalindrome(A, 0, A.size()-1);
}