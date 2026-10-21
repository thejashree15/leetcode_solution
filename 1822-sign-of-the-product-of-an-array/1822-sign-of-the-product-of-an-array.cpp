class Solution {
public:
    int signFunc(int product) {
        if (product > 0) {
            return 1;
        }
        if (product == 0) {
            return 0;
        }
        else {
            return -1;
        }
    }

    int arraySign(vector<int>& nums) {
        int product = 1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                return signFunc(0);
            }

            if (nums[i] < 0) {
                product *= -1;
            }
        }

        return signFunc(product);
    }
};