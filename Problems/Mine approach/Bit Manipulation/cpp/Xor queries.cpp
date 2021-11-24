// Problem Description

// You are given an array A (containing only 0 and 1) as element of N length.
// Given L and R, you need to determine value of XOR of all elements from 
// L to R (both inclusive) and number of unset bits (0's) in the given range of the array.

//Brute force
vector<vector<int> > Solution::solve(vector<int> &A, vector<vector<int> > &B) {
    vector<vector<int>> res;
    vector<int> ans;
    int N = A.size();
    int M = B.size();
    int s,e, xxor, count;
    for(int i=0; i<M; i++){
        s = B[i][0]-1;
        e = B[i][1]-1;
        xxor=0, count=0;
        for(int j=s; j<=e; j++){
            xxor = xxor ^ A[j];
            if(A[j] == 0){
                count++;
            }
        }
        ans.push_back(xxor);
        ans.push_back(count);
        res.push_back(ans);
        ans.clear();
    }
    return res;
}
//optimze apporach
vector<vector<int> > Solution::solve(vector<int> &A, vector<vector<int> > &B) {
    vector<vector<int>> res;
    vector<int> ans;
    vector<int> XooR;
    vector<int> ZeroCount;
    int N = A.size();


    int ps = A[0];
    XooR.push_back(ps);
    for(int i=1; i<N; i++){
         ps = ps ^ A[i];
         XooR.push_back(ps);
    }


    int zs = 0;
    for(int i=0; i<N; i++){
        if(A[i]==0){
            zs += 1;
            ZeroCount.push_back(zs);
            // zs++;

        }else{
            ZeroCount.push_back(zs);
        }
    }

    int M = B.size();
    int s,e, xxor, count=0;
    for(int i=0; i<M; i++){
        s = B[i][0]-1;
        e = B[i][1]-1;
        if(s == 0){
            xxor = XooR[e];
            count = ZeroCount[e];
        }else{
            xxor = XooR[e] ^ XooR[s-1];
            count = ZeroCount[e] - ZeroCount[s-1];
        }
        
        ans.push_back(xxor);
        ans.push_back(count);
        count=0;
        res.push_back(ans);
        ans.clear();
    }
    return res;
}


//complete aaporach
vector<vector<int> > Solution::solve(vector<int> &A, vector<vector<int> > &B) {
        int a[A.size()+1];          // Prefix sum array to get number of ones in a range         a[0] = 0;
        for(int i = 1; i <= A.size(); i++)
        {
         a[i]=A[i-1]; 
         a[i] += a[i-1];
        }
        vector <vector<int> > ans;
        for(int i=0;i<B.size();i++)
        {   vector <int> temp;
            int l, r, _xor = 0, ones;
            l=B[i][0];
            r=B[i][1];
            ones = a[r] - a[l-1];  // number of ones in range l to r             
            if(ones&1)
             {
              _xor = 1;            // if number of 1 are odd then xor is 1              }
            
            temp.push_back(_xor);
            temp.push_back(r-l+1-ones);
            ans.push_back(temp);
        }
        return ans;
    }
