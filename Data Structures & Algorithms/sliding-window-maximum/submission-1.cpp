class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> window;
        vector<int> answer;

        int maxWin=0;
        int left=0;

        for(int i=0;i<k;i++){
            if(nums[i]>maxWin)
                maxWin = nums[i];
        }
            answer.push_back(maxWin);

        for(int right=k;right<nums.size();right++){
            if(nums[right]>maxWin)
                maxWin=nums[right];
            answer.push_back(maxWin);
        }
        return answer;
    }
};
