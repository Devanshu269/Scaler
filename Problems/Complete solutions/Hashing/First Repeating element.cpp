// Problem Description

// Given an integer array A of size N, find the first repeating element in it.

// We need to find the element that occurs more than once and whose index of first occurrence is smallest.

// If there is no repeating element, return -1.

int Solution::solve(vector<int> &A) {
    int n = A.size();
    // Initialize index of first repeating element     int mini = -1;

    // Creates an empty hashset named ump     unordered_map<int,int> ump;

    // Traverse the input array from right to left     for (int i = n - 1; i >= 0; i--)
    {
        // If element is already in hash set, update min         if (ump.find(A[i]) != ump.end())
            mini = i;
        else   // Else add element to hash set             ump[A[i]] = 1;
    }
    if(mini == -1){
        return mini;
    }
    return A[mini];
}

