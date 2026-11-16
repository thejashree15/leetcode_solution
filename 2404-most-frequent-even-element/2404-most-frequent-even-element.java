
import java.util.HashMap;

class Solution {
    public int mostFrequentEven(int[] nums) {

        
        HashMap<Integer, Integer> map = new HashMap<>();

        
        for (int num : nums) {

            if (num % 2 == 0) {

                map.put(num, map.getOrDefault(num, 0) + 1);
            }
        }

        int maxFreq = 0;
        int result = -1;

   
        for (int key : map.keySet()) {

            int freq = map.get(key);

            if (freq > maxFreq) {

                maxFreq = freq;
                result = key;

            } else if (freq == maxFreq && key < result) {

                result = key;
            }
        }

      
        return result;
    }
}
