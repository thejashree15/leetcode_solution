class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {        // keep going until num is a single digit
            int sum = 0;
            while (num > 0) {      // sum all digits of num
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            num = sum;             // replace num with the sum of digits
        }
        return num;                // single digit result
    }
};
