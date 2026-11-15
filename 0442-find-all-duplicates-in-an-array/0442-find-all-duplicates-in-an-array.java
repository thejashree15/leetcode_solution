import java.util.*;

class Solution {
    public List<Integer> findDuplicates(int[] nums) {

        HashSet<Integer> set = new HashSet<>();
        List<Integer> result = new ArrayList<>();

        for (int i = 0; i < nums.length; i++) {

            if (!set.add(nums[i])) {
                result.add(nums[i]);
            }
        }

        return result;
    }
}