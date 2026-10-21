class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        while(!nums.empty()){
            int first=*min_element(nums.begin(),nums.end());
            nums.erase(find(nums.begin(),nums.end(),first));
             int second=*min_element(nums.begin(),nums.end());
            nums.erase(find(nums.begin(),nums.end(),second));
            ans.push_back(second);
            ans.push_back(first);

        }
        return ans;
        
    }
};