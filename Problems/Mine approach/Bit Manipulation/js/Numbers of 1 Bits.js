// Write a function that takes an integer and returns the number of 1 bits it has.
module.exports = { 
    //param A : integer
    //return an integer
       numSetBits : function(A){
    
       let B, count =0;
       B = A.toString(2);
       for(let i=0; i<B.length; i++){
           if(B.charAt(i) === "1"){
               count++;
           }
       }
       // console.log(B.charAt(B.length-1));
       // console.log(B);
       return count;
   }
       
   };