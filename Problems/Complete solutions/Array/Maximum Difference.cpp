// Given an array of integers A and an integer B. Find and return the maximum value of | s1 - s2 |

// where s1 = sum of any subset of size B, s2 = sum of elements of A - sum of elemets of s1

// Note |x| denotes the absolute value of x.

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    long long s1=0,s2=0,s=0;
    sort(A.begin(),A.end());
    int ans=0;
    for(auto &it:A)s+=1LL*it;
 if (B <= n/2) {
   for (int j = 0; j < B; j++) {
   s1 += A[j];
   }
   } else {
   for (int j = n - 1; j > n - 1 - B; j--) {
   s1 += A[j];
   }
   }
   ans = s > 2*s1 ? s - (2*s1) : 2*s1 - s;
    return ans;
}