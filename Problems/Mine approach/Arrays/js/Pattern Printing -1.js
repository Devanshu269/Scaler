// Print a Pattern According to The Given Value of A.

// Example: For A = 3 pattern looks like:

// 1 0 0

// 1 2 0

// 1 2 3
module.exports = { 
    //param A : integer
    //return a array of array of integers
       solve : function(A){
               let B = Array.from(Array(A), () => new Array(A));
               for(let i=0; i<A; i++){
                   for(let j=0; j<=i; j++){
                   B[i][j] = j + 1;
               }
               for(let j=i+1; j<A; j++){
                   B[i][j] = 0;
               }
               }
                               return B;
       }
   };