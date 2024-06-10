class Solution {
public:
    int heightChecker(std::vector<int>& heights) {
        // Create a copy of heights and sort it to get the expected order
        std::vector<int> expected = heights;
        std::sort(expected.begin(), expected.end());

        // Count the number of mismatches
        int mismatch_count = 0;
        for (size_t i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) {
                ++mismatch_count;
            }
        }

        return mismatch_count;
    }
};