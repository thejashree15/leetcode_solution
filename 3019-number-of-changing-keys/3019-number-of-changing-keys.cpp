class Solution {
public:
    int countKeyChanges(string s) {
        
        int count=0;
        for(char &ch:s){
            ch=tolower(ch);
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        return count;
    }
};