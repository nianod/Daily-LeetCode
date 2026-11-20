//  Recursion O(2^n). A char may be decoded alone or by pairing with the next char.
   
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        return s.empty() ? 0 : numDecodings(0, s);    
    }

private:
    int numDecodings(int p, string& s) {
        int n = s.size();
        if (p == n) return 1;
        if (s[p] == '0') return 0; / 


        int res = numDecodings(p + 1, s);
        if (p < n - 1 && (s[p] == '1' || (s[p] == '2' && s[p + 1] < '7'))) {
            res += numDecodings(p + 2, s);
            
        }
        return res;
    }
};

// Entry point 
int main() {
    Solution sol;
    cout << sol.numDecodings("12") << endl;   // Output: 2
    cout << sol.numDecodings("226") << endl;  // Output: 3
    cout << sol.numDecodings("06") << endl;   // Output: 0
    return 0;
}
