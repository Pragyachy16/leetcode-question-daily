class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;
    
    // Count the frequency of each character
    for (char c : s) {
        charCount[c]++;
    }
    
    int length = 0;
    bool oddFound = false;
    
    // Calculate the length of the longest palindrome
    for (const auto& entry : charCount) {
        if (entry.second % 2 == 0) {
            length += entry.second;
        } else {
            length += entry.second - 1;
            oddFound = true;
        }
    }
    
    // If any odd count was found, add one to the length for the center character
    if (oddFound) {
        length += 1;
    }
    
    return length;
    }
};