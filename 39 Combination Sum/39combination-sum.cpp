class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, 
                   vector<int>& temp, vector<vector<int>>& result) {
        
        if (target == 0) {
            result.push_back(temp);
            return;
        }
        
        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) continue;
            
            temp.push_back(candidates[i]);
            
            // not i+1 because we can reuse same element
            backtrack(candidates, target - candidates[i], i, temp, result);
            
            temp.pop_back(); // backtrack
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        
        backtrack(candidates, target, 0, temp, result);
        return result;
    }
};