class Solution {
public:
    int firstOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int result = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                result = mid;
                high = mid - 1; 
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }

    int lastOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int result = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                result = mid;
                low = mid + 1; 
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurrence(nums, target);
        int last = lastOccurrence(nums, target);
        return {first, last};
    }
};
