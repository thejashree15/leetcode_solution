class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];  // start with the first string
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {  // while prefix is not at the start
                prefix = prefix.substr(0, prefix.size() - 1);  // shorten prefix
                if (prefix.empty()) return "";  // no common prefix
            }
        }
        return prefix;
    }
};