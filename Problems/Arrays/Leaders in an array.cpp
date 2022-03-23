// Problem Description

// Given an integer array A containing N distinct integers, you have to find all the leaders in the array A.

// An element is leader if it is strictly greater than all the elements to its right side.

// NOTE:The rightmost element is always a leader
vector<int> printLeaders(vector<int>& arr) 
{ 
    int size = arr.size();
    int max_from_right =  arr[size-1]; 
  
    vector<int>ans;
    ans.push_back(arr[size-1]);
    
    for (int i = size-2; i >= 0; i--) 
    { 
        if (max_from_right < arr[i]) 
        {            
            max_from_right = arr[i];
            ans.push_back(max_from_right);
        } 
    }
    return ans;
} 
  
vector<int> Solution::solve(vector<int> &A) {
    return printLeaders(A);
}