#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // Convert integers to strings
        vector<string> strNums;
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }
        
        // Custom sort: compare concatenated results
        sort(strNums.begin(), strNums.end(), [](string &a, string &b) {
            return a + b > b + a;
        });
        
        // Edge case: if the largest number starts with '0'
        if (strNums[0] == "0") return "0";
        
        // Concatenate result
        string result;
        for (string &s : strNums) {
            result += s;
        }
        
        return result;
    }
};