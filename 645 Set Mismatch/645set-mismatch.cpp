class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1, missing = -1;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    duplicate = nums[i];
                    break;
                }
            }
            if (duplicate != -1) break;
        }

        // Find missing by checking which number from 1..n is not present
        for (int i = 1; i <= n; i++) {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                missing = i;
                break;
            }
        }

        return {duplicate, missing};
    }
};
