class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> Smap;
        unordered_map<char, int> Tmap;
        int i=0;
        int n = s.size();
        if(t.size()!=n) return false;
        while(i<n){
            Smap[s[i]]++;
            Tmap[t[i]]++;
            i++;
        }
        if(Smap==Tmap) return true;
        else return false;
    }
};
