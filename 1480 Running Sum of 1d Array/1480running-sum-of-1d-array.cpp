class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int>result;
       int current_sum=0;
       for(int n : nums)
       {
        current_sum+=n;
        result.push_back(current_sum);
       }
       return result;
    }

};