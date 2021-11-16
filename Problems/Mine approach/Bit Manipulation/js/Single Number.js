// Given an array of integers A, every element appears twice except for one. Find that single one
module.exports = { 
    //param A : array of integers
    //return an integer
       singleNumber : function(A){
        let n = 0;
        for(let i=0; i<A.length; i++){
            n = n^A[i];
        }
        return n;
	}
};