// Given an array of integers A and an integer B. Find and return the maximum value of | s1 - s2 |

// where s1 = sum of any subset of size B, s2 = sum of elements of A - sum of elemets of s1

// Note |x| denotes the absolute value of x.

int Solution::solve(vector<int> &A, int B) {
    int N = A.size();
    sort(A.begin(), A.end());
    int minS1=0, maxS1=0, maxS2=0, minS2=0, res;
    int total_sum=0;
    for(int i=0; i<N; i++){
        total_sum += A[i];
    }
    for(int i=0; i<B; i++){
        minS1 += A[i];
    }
    minS2 = total_sum - minS1;
    for(int j=N-1; j>N-1-B; j--){
        maxS1 += A[j];
    }
    maxS2 = total_sum - maxS1;
    res = max(abs(maxS1 - maxS2), abs(minS1 - minS2));
    return res;
}