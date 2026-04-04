class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;

        // count frequencies
        for (auto x : nums) {
            freq[x]++;
        }

        // find the element with max frequency
        int majority = nums[0];
        int maxCount = 0;

        for (auto& p : freq) {
            if (p.second > maxCount) {
                maxCount = p.second;
                majority = p.first;
            }
        }

        return majority;
    }
};