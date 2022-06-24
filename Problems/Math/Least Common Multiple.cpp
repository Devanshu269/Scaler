// Problem Description
// You are given two non-negative integers, A and B. Find the value of the Least Common Multiple (LCM) of A and B.

// LCM of two integers is the smallest positive integer divisible by both.

int gcd(int a, int b)
{
  if (b == 0){
      return a;
  }
    
  return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int Solution::LCM(int A, int B) {
    return lcm(A, B);
}