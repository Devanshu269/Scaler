// Problem Description

// Given a positive integer A, return an array of strings with all the integers from 1 to N. 
// But for multiples of 3 the array should have “Fizz” instead of the number. For the multiples of 5, 
// the array should have “Buzz” instead of the number. For numbers which are multiple of 3 and 5 both, 
// the array should have "FizzBuzz" instead of the number.

// Look at the example for more details.

//Mine Apporach
vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    for(int i=1; i<=A; i++){
        if(i%3==0 && i%5==0){
            ans.push_back("FizzBuzz");
        }else if(i%3==0){
             ans.push_back("Fizz");
        }else if(i%5==0){
             ans.push_back("Buzz");
        }else{
            ans.push_back(to_string(i));
        }
        
    }
    return ans;
}

//Complete Apporach
vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    for (int i = 1; i <= A; i++) {
        string toPush = "";
        if (i % 3 == 0) toPush += "Fizz";
        if (i % 5 == 0) toPush += "Buzz";
        if (i % 3 != 0 && i % 5 != 0) toPush += to_string(i);
        ans.push_back(toPush);
    }
    return ans;
}