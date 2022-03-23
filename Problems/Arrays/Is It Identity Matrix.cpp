/*You are given a N X N square integer matrix A. You have to tell whether A is an identity matrix or not.

Identity matrix is a special square matrix whose main diagonal elements are equal to 1 and all other elements are 0.*/

//My solution
int Solution::solve(const vector<vector<int> > &A) {
        int flag;
        int rows = A.size();
        int cols = A[0].size();
        if(rows != cols)
        {
            return 0;
        }
        for(int i=0; i< A.size(); i++){
            for(int j=0; j< A.size(); j++){
                if(i==j && A[i][j] != 1 ){ 
                    return 0;
                }
                if(i!=j && A[i][j] != 0){
                    return 0;
                }
            }
        }
        return 1;
	}

//Complet solution
int Solution::solve(const vector<vector<int> > &A) {
    int N = A.size();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j && A[i][j] != 1)
            {
                return 0;
            }
            if (i != j && A[i][j] != 0)
            {
                return 0;
            }
        }
    }
    
    return 1;
}