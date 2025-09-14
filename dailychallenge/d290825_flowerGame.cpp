// Problem statement : Alice and Bob are playing a turn-based game on a field, with two lanes of flowers between them. There are x flowers in the first lane between Alice and Bob, and y flowers in the second lane between them.

// The game proceeds as follows:

// Alice takes the first turn.
// In each turn, a player must choose either one of the lane and pick one flower from that side.
// At the end of the turn, if there are no flowers left at all, the current player captures their opponent and wins the game.
// Given two integers, n and m, the task is to compute the number of possible pairs (x, y) that satisfy the conditions:

// Alice must win the game according to the described rules.
// The number of flowers x in the first lane must be in the range [1,n].
// The number of flowers y in the second lane must be in the range [1,m].
// Return the number of possible pairs (x, y) that satisfy the conditions mentioned in the statement.

 

// Example 1:

// Input: n = 3, m = 2
// Output: 3
// Explanation: The following pairs satisfy conditions described in the statement: (1,2), (3,2), (2,1).
// Example 2:

// Input: n = 1, m = 1v
// Output: 0
// Explanation: No pairs satisfy the conditions described in the statement.
 

// Constraints:

// 1 <= n, m <= 105

// class Solution {
// public:
//     long long flowerGame(int n, int m) {
//         int count=0;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if((i+j)%2!=0){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };


#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    
    // For (x + y) to be odd, we need one odd and one even number
    // Count odd numbers in range [1, n]: (n + 1) / 2
    // Count even numbers in range [1, n]: n / 2
    
    long long odd_x = (n + 1) / 2;   // odd numbers in [1, n]
    long long even_x = n / 2;       // even numbers in [1, n]
    
    long long odd_y = (m + 1) / 2;   // odd numbers in [1, m]
    long long even_y = m / 2;       // even numbers in [1, m]
    
    // Alice wins when (x + y) is odd
    // This happens when: (odd_x, even_y) or (even_x, odd_y)
    long long result = odd_x * even_y + even_x * odd_y;
    
    cout << result << endl;
    
    return 0;
}

/*
Explanation:
- For x + y to be odd, exactly one of x or y must be odd
- Case 1: x is odd, y is even → odd_x * even_y pairs
- Case 2: x is even, y is odd → even_x * odd_y pairs
- Total = odd_x * even_y + even_x * odd_y

Time Complexity: O(1) - constant time
Space Complexity: O(1) - constant space

Example verification:
n = 3, m = 2
odd_x = (3+1)/2 = 2, even_x = 3/2 = 1
odd_y = (2+1)/2 = 1, even_y = 2/2 = 1
result = 2*1 + 1*1 = 3 ✓

n = 1, m = 1  
odd_x = (1+1)/2 = 1, even_x = 1/2 = 0
odd_y = (1+1)/2 = 1, even_y = 1/2 = 0
result = 1*0 + 0*1 = 0 ✓
*/
