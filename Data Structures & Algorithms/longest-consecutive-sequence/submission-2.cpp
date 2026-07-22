class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int> numset(nums.begin(), nums.end());
        
        for(int num: nums){
            if(numset.find(num-1)==numset.end()){
                int len = 1;
                while(numset.find(num+len)!=numset.end()){
                    len++;
                }
                res = max(res, len);
            }
            
        }
        return res;
    }
};
