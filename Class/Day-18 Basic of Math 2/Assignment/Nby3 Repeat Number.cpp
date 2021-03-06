// Problem Description
// You're given a read-only array of N integers. Find out if any integer occurs more than N/3 times in the array in linear time and constant additional space.
// If so, return the integer. If not, return -1.

// If there are multiple solutions, return any one.

int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
   int count1 = 0, count2 = 0;
    int first=A[0]    , second=A[1]    ;
 
    for (int i = 0; i < n; i++) {

        if (first == A[i])
            count1++;

        else if (second == A[i])
            count2++;
     
        else if (count1 == 0) {
            count1++;
            first = A[i];
        }
 
        else if (count2 == 0) {
            count2++;
            second = A[i];
        }
        else {
            count1--;
            count2--;
        }
    }
 
    count1 = 0;
    count2 = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] == first)
            count1++;
 
        else if (A[i] == second)
            count2++;
    }
 
    if (count1 > n / 3)
        return first;
 
    if (count2 > n / 3)
        return second;
 
    return -1;
}

