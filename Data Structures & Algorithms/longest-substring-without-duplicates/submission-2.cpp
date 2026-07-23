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
            len = max(len, right-left+1);
            chars.insert(s[right]);
        }
        return len;
    }
};
