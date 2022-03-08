//Given two binary strings, return their sum (also a binary string).

//My apporach
string Solution::addBinary(string A, string B) {
    string result = ""; 
    int s = 0;          
 
    int i = A.size() - 1, j = B.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        s += ((i >= 0)? A[i] - '0': 0);
        s += ((j >= 0)? B[j] - '0': 0);
        result = char(s % 2 + '0') + result;
        s /= 2;
        i--; j--;
    }
    return result;
}

//Complete solution
class Solution {
public:
    string addBinary(string a, string b) {
           string ans = "";
    int ansLen = 0, carry = 0, sum;
    int i = (int)a.length() - 1, j = (int)b.length() - 1;
    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        if (i >= 0) sum += (a[i] - '0');
        if (j >= 0) sum += (b[j] - '0');
        ans.push_back((char)('0' + sum % 2));
        carry = sum / 2;
        i--; 
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};