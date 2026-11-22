//  Jump Game
 
// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        for (int i = 0; i < nums.size(); ++i) {

            if (i > maxReach) return false
            
            maxReach = max(maxReach, i + nums[i])
        }
        return true;
    }
}

int main() {
    Solution sol
    
    vector<int> test1 = {2, 3, 1, 1, 4}
    vector<int> test2 = {3, 2, 1, 0, 4}
    
    cout << boolalpha 
    cout << "Test 1: " << sol.canJump(test1) << endl 
    cout << "Test 2: " << sol.canJump(test2) << endl 
    
    return 0

}
