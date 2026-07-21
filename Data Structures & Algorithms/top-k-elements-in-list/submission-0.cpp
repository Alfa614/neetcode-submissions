class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int num: nums){
            count[num]++;
        }
        priority_queue<pair<int,int>> heap;
        for(auto& p: count){
            heap.push({p.second,p.first});
        }
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};
