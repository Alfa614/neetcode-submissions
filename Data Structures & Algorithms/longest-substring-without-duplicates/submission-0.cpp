class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0,templen=0;
        unordered_set<char> chars;
        for(char c:s){
            if(chars.count(c)) templen=1;
            else {
                templen++;
                chars.insert(c);
            }
            if(templen>len) len=templen;
        }
        return len;
    }
};
