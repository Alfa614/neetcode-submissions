class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        int i=0;
        while(i<nums.size()){
            if(set.count(nums[i])){
                return true;
            }
            set.insert(nums[i]);
            i++;
        }
        return false;
    }
};