// Given a binary string A. It is allowed to do at most one swap between any 0 and 1. 
// Find and return the length of the longest consecutive 1’s that can be achieved.

int Solution::solve(string A) {
    int n = A.length();
    int cnt_one = 0; 
  
    for (int i = 0; i < n; i++) { 
        if (A[i] == '1') 
            cnt_one++; 
    } 
   
    int left[n], right[n]; 
  
    if (A[0] == '1') 
        left[0] = 1; 
    else
        left[0] = 0; 
  
    if (A[n - 1] == '1') 
        right[n - 1] = 1; 
    else
        right[n - 1] = 0; 
  
    for (int i = 1; i < n; i++) { 
        if (A[i] == '1') 
            left[i] = left[i - 1] + 1;
        else
            left[i] = 0; 
    } 
  
    for (int i = n - 2; i >= 0; i--) { 
        if (A[i] == '1') 
            right[i] = right[i + 1] + 1; 
        else
            right[i] = 0; 
    } 
    int cnt = 0, max_cnt = 0 ;
    int flag =0; 
    for (int i = 1; i < n - 1; i++) { 
        if (A[i] == '0') { 
            int sum = left[i - 1] + right[i + 1]; 
            if (sum < cnt_one) 
                cnt = sum + 1; 
            else
                cnt = sum; 
            max_cnt = max(max_cnt, cnt); 
            cnt = 0; 
            flag = 1;
        } 
    } 
    if(flag==0)
        max_cnt = cnt_one;
  
    return max_cnt;
}
