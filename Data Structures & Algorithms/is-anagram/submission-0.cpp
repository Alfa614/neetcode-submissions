class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        
        unordered_map<char, int> S;
        unordered_map<char, int> T;
        int i = 0;
        while(i<s.length()){
            S[s[i]]++;
            T[t[i]]++;
            i++;
        }
        return S==T;
    }
};
