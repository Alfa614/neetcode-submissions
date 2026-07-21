class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> chart;
        for(auto& s: strs){
            vector<int> count(26,0);
            for(char c : s)
                count[c-'a']++;
            string key = to_string(count[0]);
            for(int i=1;i<26;i++){
                key += ',' + to_string((count[i]));
            }
            chart[key].push_back(s);
        }
        for(auto& vecs: chart){
            res.push_back(vecs.second);
        }
        return res;
    }
};
