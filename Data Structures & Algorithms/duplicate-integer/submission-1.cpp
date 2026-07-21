class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> seen;
        int i=0;
        while(i<nums.size()){
            if(seen.count(nums[i])) return true;
            seen.insert(nums[i]);
            i++;
        }
        return false;
    }
};