import java.util.HashMap;
import java.util.Map;

class Solution {
    public int subarraySum(int[] nums, int k) {
        Map<Integer, Integer> hm = new HashMap<>();
        hm.put(0, 1); // base case: sum = 0 occurs once
        int sum = 0, c = 0;

        for (int num : nums) {
            sum += num;
            if (hm.containsKey(sum - k)) {
                c += hm.get(sum - k);
            }
            hm.put(sum, hm.getOrDefault(sum, 0) + 1);
        }
        return c;
    }
}
