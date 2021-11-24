Problem Description

You are given a n x n 2D matrix A representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

void Solution::solve(vector<vector<int> > &matrix) {
    int len = matrix.size();
    for (int i = 0; i < len / 2; i++) {
        for (int j = i; j < len - i - 1; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[len - j - 1][i];
            matrix[len - j - 1][i] = matrix[len - i - 1][len - j - 1];
            matrix[len - i - 1][len - j - 1] = matrix[j][len - i - 1];
            matrix[j][len - i - 1] = tmp;
        }
    }
}


