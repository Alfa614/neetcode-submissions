class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<int> sol;
        for(int num: nums){
            count[num]++;
        }
        priority_queue<pair<int,int>> heap;
        for(auto& c:count){
            heap.push({c.second,c.first});
        }
        while(k--){
            sol.push_back(heap.top().second);
            heap.pop();
        }
        return sol;
    }
};
