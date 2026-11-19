//  You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> tmp;
    for (int i = 0; i < nums.size(); ++i) {
        if (tmp.count(target - nums[i])) {
            return {tmp[target - nums[i]], i};
        }
        tmp[nums[i]] = i;
    }
    return {-1, -1}; 
}

int main() {
    // Example test case
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
