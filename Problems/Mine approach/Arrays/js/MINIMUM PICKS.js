// You are given an array of integers A of size N.
// Return the difference between the maximum among all even numbers of A and the minimum among all odd numbers in A.
module.exports = { 
    //param A : array of integers
    //return an integer
       solve : function(A){
           var B = new Array();
           var C = new Array();
           for(let i=0; i<A.length; i++){
               if(A[i]%2==0){
                   B[i]=A[i];
               }else{
                   C[i]=A[i];
               }
           }
           
           
           for( var i = 0; i < B.length; i++){ 
                                      
           if ( B[i] === undefined) { 
               // B.splice(i, 1); 
               // i--; 
               B[i]=-1000000000-5;
           }
       }
       B.sort(function(a,b){
               return(a-b);
           })
   
           // console.log(B)
           
           for( var i = 0; i < C.length; i++){ 
                                      
           if ( C[i] === undefined) { 
               // C.splice(i, 1); 
               // i--; 
               C[i]=1000000000+5;
           }
       }
       C.sort(function(a,b){
               return(a-b);
           })
           // console.log(C)
           var Bend = B.length - 1
           return(B[Bend]-C[0]);
           
       }
   };