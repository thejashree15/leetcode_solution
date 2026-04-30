class Solution {
public:
    void backtrack(int start, int target, vector<int>& candidates, 
                   vector<int>& current, vector<vector<int>>& result) {
        
        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // Skip duplicates
            if (i > start && candidates[i] == candidates[i - 1]) continue;

            // Stop if number exceeds target
            if (candidates[i] > target) break;

            current.push_back(candidates[i]);

            // Move to next index (i+1, not i)
            backtrack(i + 1, target - candidates[i], candidates, current, result);

            current.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;

        sort(candidates.begin(), candidates.end());

        backtrack(0, target, candidates, current, result);

        return result;
    }
};