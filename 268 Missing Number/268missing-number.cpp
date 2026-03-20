class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        int sum=(n*(n+1))/2;
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
        int final=sum-total;
        return final;
        
    }
};