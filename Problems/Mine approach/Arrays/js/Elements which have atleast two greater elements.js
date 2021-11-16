// You are given an array of distinct integers A, you have to find and return all elements in array which have at-least two greater elements than themselves.

// NOTE: The result should have the order in which they are present in the original array.
module.exports = { 
    //param A : array of integers
    //return a array of integers
       solve : function(A){
           let MaxFirstNumber = -1000000000-5;
           let MaxSecondNumber = -1000000000-5;
           for(let i=0; i<A.length; i++){
               if(A[i] > MaxFirstNumber){
                   MaxSecondNumber = MaxFirstNumber;
                   MaxFirstNumber = A[i];
               }else if(A[i] > MaxSecondNumber){
                   MaxSecondNumber = A[i];
               }
           }
           for(let i=0; i<A.length; i++){
               if(A[i] === MaxFirstNumber){
                    A.splice(i, 1);
                    i--;
   
                }
                if(A[i] === MaxSecondNumber){
                    A.splice(i, 1);
                    i--;
   
                }
           }
           
       return A;
       }
   };