// Problem Description
// Given an array A of non-negative integers, arrange them such that they form the largest number.

// Note: The result may be very large, so you need to return a string instead of an integer.

bool compare(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    if(ab > ba){
        return true;
    }
    return false;
}
string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector<string> B;
    for(int i=0; i<n; i++){  
        B.push_back(to_string(A[i]));
    }
    sort(B.begin(), B.end(), compare);
    string s="";
    for(int i=0; i<n; i++){
        s+=B[i];
    }
    int i=0;
    while(s[i]=='0'){
        i++;
    }
    if(i==s.length())
        s="0";
    return s;
}
