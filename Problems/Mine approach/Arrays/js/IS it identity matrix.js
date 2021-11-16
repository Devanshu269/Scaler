// You are given a N X N square integer matrix A. You have to tell whether A is an identity matrix or not.

// Identity matrix is a special square matrix whose main diagonal elements are equal to 1 and all other elements are 0.
module.exports = { 
    //param A : array of array of integers
    //return an integer
       solve : function(A){
           let flag;
           for (var k = 0; k < A.length; k++)
                {
               let rows = A.length;
               let cols = A[k].length;
               if(rows != cols)
               {
               return 0;
               }
           }
           for(let i=0; i<A.length; i++){
               for(let j=0; j<A.length; j++){
                   if(A[i][j] != 1 && i==j){
                        flag = false;  
                         break;  
                   }
                   if(A[i][j] != 0 && i!=j){
                        flag = false;  
                         break;  
                   }
               }
           }
           if(flag == false){
               return 0;
           }else{
               return 1;
           }
       }
   };
   