#include <set>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        int j=0;
        for(auto it : st)
        {
            nums[j]=it;
            j++;
        }
        return j;

        
        
    }
};