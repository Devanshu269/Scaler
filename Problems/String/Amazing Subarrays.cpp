// You are given a string S, and you have to find all the amazing substrings of S.

// Amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).


const int MOD = 10003;
bool isVowel(char A) {
    bool res = true;
    switch (A) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            res = true;
            break;
        default:
            res = false;
            break;
    }
    return res;
}

int Solution::solve(string A) {
    int count = 0;
    int N = A.length();
    for (int i = 0; i < N; ++i) {
        if (isVowel(A[i])) {
            count += N - i;
        }
    }
    return count%MOD;
}

//complete solution
int Solution::solve(string s) {
    
    map<char, bool> m;
    m['a'] = m['e'] = m['i'] = m['o'] = m['u'] = 1;
    m['A'] = m['E'] = m['I'] = m['O'] = m['U'] = 1;
    
    int n = s.length();
    long long ans = 0;
    for(int i = 0; i < n; i += 1) {
        if(m[s[i]])
            ans += (n - i);
    }
    return ans % 10003;
}