// You are given a string S, and you have to find all the amazing substrings of S.

// An amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).

int Solution::solve(string A) {
    int N = A.length();
    const int mod = 1e9 + 3;
    int count =0;
    for(int i=0; i<N; i++){
        if(A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' ||
         A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'){
             count += N-i;
         }
    }
    int ans;
    ans = count % mod;
    return ans;

}
