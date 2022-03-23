// Given an array A of integers and another non negative integer k, 
// find if there exists 2 indices i and j such that A[i] - A[j] = k, i != j.

int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int, int> m;
    int N = A.size();
    for(int i=0; i<N; i++){
        m.insert({A[i], i});
    }
    int x1,x2;
    for(int i=0; i<N; i++){
        x1 = A[i] - B;
        x2 = A[i] + B;
        if(m.find(x1) != m.end() && m[x1]!=i){
            return 1;
        }else if(m.find(x2) != m.end() && m[x2]!=i){
            return 1;
        }
    }
    return 0;
}

//complete solution
class Solution {
    public:
        int diffPossible(const vector<int> &num, int diff) {
            if (num.size() < 2 || diff < 0) return false;
            unordered_set<int> S;
            for (int i = 0; i < num.size(); i++) {
                int aj = num[i] - diff;
                int ai = num[i] + diff;
                if (S.find(aj) != S.end()) return true;
                if (S.find(ai) != S.end()) return true;
                S.insert(num[i]);
            }
            return false;
        }
};