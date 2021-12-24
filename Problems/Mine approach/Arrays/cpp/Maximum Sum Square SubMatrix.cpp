Problem Description

Given a 2D integer matrix A of size N x N find a B x B submatrix where B<= N and B>= 1, 
such that sum of all the elements in submatrix is maximum.
const int maxn = 1009;

int stripSum[maxn][maxn];

int maxSumSub(int k, vector < vector < int > > & mat) {

  int N = mat.size();

  if (k > N) return 0;

  memset(stripSum, 0, sizeof(stripSum));;

  for (int j = 0; j < N; j++) {

    int sum = 0;

    for (int i = 0; i < k; i++)

      sum += mat[i][j];

    stripSum[0][j] = sum;

    for (int i = 1; i < N - k + 1; i++) {

      sum += (mat[i + k - 1][j] - mat[i - 1][j]);

      stripSum[i][j] = sum;

    }

  }

  int max_sum = INT_MIN;

  for (int i = 0; i < N - k + 1; i++) {

    int sum = 0;

    for (int j = 0; j < k; j++)

      sum += stripSum[i][j];

    if (sum > max_sum) {

      max_sum = sum;

    }

    for (int j = 1; j < N - k + 1; j++) {

      sum += (stripSum[i][j + k - 1] - stripSum[i][j - 1]);

      if (sum > max_sum) {

        max_sum = sum;

      }

    }

  }

  return max_sum;

}

int Solution::solve(vector < vector < int > > & A, int B) {

  return maxSumSub(B, A);

}