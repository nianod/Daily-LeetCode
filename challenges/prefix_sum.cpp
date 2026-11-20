// # Range Sum Query - Immutable

// # Given an integer array nums, handle multiple queries of the following type:

// # Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
// # Implement the NumArray class:

// # NumArray(int[] nums) Initializes the object with the integer array nums.
// # int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).

#include <iostream>
#include <vector>

using namespace std;

class NumMatrix {
public:
    vector<vector<int>> sum;
    
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return;  
        int m = matrix.size(), n = matrix[0].size();
        sum = vector<vector<int>>(m + 1, vector<int>(n + 1, 0));
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        } 

    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        r1++; c1++; r2++; c2++; 
        return sum[r2][c2] - sum[r2][c1 - 1] - sum[r1 - 1][c2] + sum[r1 - 1][c1 - 1];
    }
};

// run locally
int main() {
    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}
    };

    NumMatrix obj(matrix);
    cout << obj.sumRegion(2, 1, 4, 3) << endl; // Output: 8
    cout << obj.sumRegion(1, 1, 2, 2) << endl; // Output: 11
    cout << obj.sumRegion(1, 2, 2, 4) << endl; // Output: 12

    return 0;
}
