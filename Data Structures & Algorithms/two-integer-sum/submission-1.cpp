class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int n = nums.size();
        vector<int> result;
        while(i<n){
            int diff = target - nums[i];
            int j = i+1;
            while(j<n){
                if(nums[j]==diff){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
                j++;
            }
            i++;
        }
    }
};
