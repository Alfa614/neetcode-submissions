class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> sol;
        for(auto& num : nums){
            count[num]++;
        }
        vector<pair<int,int>> pairings;
        for(auto& c : count){
            pairings.push_back({c.second,c.first});
        }
        sort(pairings.rbegin(), pairings.rend());
        for(int i=0;i<k;i++){
            sol.push_back(pairings[i].second);
        }
        return sol;
    }
};
