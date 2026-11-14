class Solution {
    public int findNumbers(int[] nums) {
        int even = 0;
        for (int i = 0; i < nums.length; i++) {
            int digit = nums[i];
            int count = 0;
            while (digit > 0) {
                count++;
                digit /= 10;
            }

            if (count % 2 == 0) {
                even++;
            }
        }

        return even;
    }
}