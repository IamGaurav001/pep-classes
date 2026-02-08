#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
  public:
    string firstRepChar(string s) {
        // Use a set to track characters we've seen
        unordered_set<char> seen;
        
        // Iterate through each character in the string
        for (int i = 0; i < s.length(); i++) {
            // If character is already in set, it's the first repeated char
            if (seen.find(s[i]) != seen.end()) {
                return string(1, s[i]);  // Convert char to string
            }
            // Otherwise, add it to the set
            seen.insert(s[i]);
        }
        
        // No repeated character found
        return "-1";
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    string s1 = "geeksforgeeks";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << sol.firstRepChar(s1) << endl;
    cout << endl;
    
    // Test case 2
    string s2 = "hellogeeks";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << sol.firstRepChar(s2) << endl;
    cout << endl;
    
    // Test case 3
    string s3 = "abc";
    cout << "Input: " << s3 << endl;
    cout << "Output: " << sol.firstRepChar(s3) << endl;
    
    return 0;
}
