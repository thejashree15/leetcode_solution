#include <vector>
using namespace std;

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int number = nums[i];   
            while (number != 0) {
                int lastDigit = number % 10;  
                if (lastDigit == digit) {
                    count++;
                }
                number /= 10;  
            }
        }
        return count;
    }
};
