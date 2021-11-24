Problem Description

Print a Pattern According to The Given Value of A.

Example: For A = 3 pattern looks like:

    1
  2 1
3 2 1

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> >ans(A);
      for(int i=1;i<=A;i++)
      {
        for(int j=1;j<=A-i;j++)ans[i-1].push_back(0);
        for(int j=i;j>=1;j--)ans[i-1].push_back(j);
      }
    return ans;
}