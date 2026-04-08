class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(static_cast<unsigned char>(s[i]));
        }
        return s; // ✅ return the modified string
    }
};
