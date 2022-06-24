// Problem Description
// Eight integers A, B, C, D, E, F, G, and H represent two rectangles in a 2D plane.
// For the first rectangle, its bottom left corner is (A, B), and the top right corner is (C, D), and for the second rectangle, its bottom left corner is (E, F), and the top right corner is (G, H).

// Find and return whether the two rectangles overlap or not

int Solution::solve(int A, int B, int C, int D, int E, int F, int G, int H) {
        // If one rectangle is on left side of other 
    if (A >= G || E >= C) 
        return false; 
  
    // If one rectangle is above other 
    if (B >= H || F >= D) 
        return false; 
  
    return true; 
}
