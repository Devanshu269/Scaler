// Smaller and Greater
// You are given an Array A of size N.

// Find for how many elements, there is a strictly smaller element and a strictly greater element.
module.exports = { 
    //param A : array of integers
    //return an integer
       solve : function(A){
               var count = 0;
               var end = A.length - 1
               A.sort(function(a, b){
                   return (a - b); 
               });
               for(let i = 0; i<A.length; i++){
                   
                   if(A[0] < A[i] && A[i] < A[end]){
                       count++;
                   }
               }
           return count;
       }
   };
//Aporach -> First we sort the array so that every number is in ascending order so the last elemnt is the largets and the 0th element is the smallest 
        //-> then we just ran a for loop iterating over every element checking in statement that is the number lies in b/w
        //-> if yes then we increment count and go till all the elements