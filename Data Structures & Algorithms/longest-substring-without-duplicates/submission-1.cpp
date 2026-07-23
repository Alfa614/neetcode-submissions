class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,len=0;
        unordered_set<char> chars;
        for(int right=0;right<s.length();right++){
            while(chars.count(s[right])){
                chars.erase(s[left]);
                left++;
            }
            int templen=right-left+1;
            if(templen>len) len=templen;
            chars.insert(s[right]);
        }
        return len;
    }
};
