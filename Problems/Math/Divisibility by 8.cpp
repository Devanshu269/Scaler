// Given a number A in the form of string. Check if the number is divisible by 8 or not.

// Return 1 if it is divisible by 8 else return 0.


//Mine Aporach
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


//Complete Apporach
int ans(string &s){
int n=s.size();
if(n==1)
return ((s[0]-'0')%8==0);
if(n==2) {
int x=(s[0]-'0')*10+s[1]-'0';
return (x%8==0);
}
int a3=(s[n-3]-'0')*100+(s[n-2]-'0')*10+(s[n-1]-'0');
return (a3%8==0);
}

int Solution::solve(string A) {
    return ans(A);
}