#include <iostream>
#include <vector>
#include <algorithm> // for std::max
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                maxi = max(maxi, count);
            } else {
                count = 0; // reset when encountering 0
            }
        }
        return maxi;
    }
};

