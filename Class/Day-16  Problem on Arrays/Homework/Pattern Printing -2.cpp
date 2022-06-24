// Problem Description

// Print a Pattern According to The Given Value of A.

// Example: For A = 3 pattern looks like:

//     1
//   2 1
// 3 2 1

vector<vector<int> > Solution::solve(int A) {
vector< vector< int > > ans(A);
int k=1;
    for(int i =1; i<=A; i++){
        for(int j = A; j >= 1; j--){
          if(j>i){
              ans[i-1].push_back(0);
          }
      else{
          ans[i-1].push_back(j);
        }
        }
            
    }
    return ans;
}
