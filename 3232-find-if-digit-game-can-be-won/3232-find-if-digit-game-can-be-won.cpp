
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum = 0;
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0 && nums[i] < 10) {
                sum += nums[i];
            }
            else if (nums[i] >= 10 && nums[i] < 100) {
                result += nums[i];
            }
        }
         return sum!=result;

    }
};
