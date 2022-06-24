// Problem Description
// You are given a number A in the form of a string. Check if the number is divisible by eight or not.

// Return 1 if it is divisible by eight else, return 0.

int Solution::solve(string A) {
    int N = A.length();
    int digi;
   if (N == 0)
        return 0;
    if (N == 1){
        if((A[0]-'0')%8 == 0){
            return 1;
        }else{
            return 0;
        }
    }

    if (N == 2){
        if(((A[N-2]-'0')*10 + (A[N-1]-'0'))%8 == 0){
            return 1;
        }else{
            return 0;
        }
    }
    int last = A[N-1] - '0';
    int second_last = A[N-2] - '0';
    int third_last = A[N-3] - '0';
    if(((third_last*100 + second_last*10 + last) % 8 == 0)){
        return 1;
    }else{
        return 0;
    }
    
}
