class Solution {
public:
    int giveMax(int left, int right, vector<int> &num){
            int max = INT_MIN;
            for(int i=left;i<=right;i++){
                if(num[i]>max)
                    max=num[i];
            }
            return max;
        }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> window;
        vector<int> answer;

        int left=0;

        for(int right=k-1;right<nums.size();right++){
            int max= giveMax(left,right,nums);
            answer.push_back(max);
            left++;
        }
        return answer;
    }
};
