#include <cmath>  // for pow

class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {   // loop until happy (1) or stuck (4)
            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += pow(digit, 2);  // use pow for squaring
                n /= 10;               // reduce n
            }
            n = sum;  // update n with the new sum
        }
        return n == 1;
    }
};
