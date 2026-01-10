class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num > 0) {
            if (num % 2 == 0)
                num = num / 2;
            else
                num = num - 1;
            count++;   // increment inside the loop
        }
        return count;  // ✅ now inside the function
    }
};
