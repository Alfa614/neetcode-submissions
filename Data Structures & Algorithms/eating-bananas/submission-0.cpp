class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int right = piles[n-1];
        int k = piles[n-1];

        while(left<=right){
            int mid = left + (right-left)/2;
            int sum = 0;
            for(int bananas : piles){
                sum += ceil(double(bananas)/mid);
            }
            if(sum<=h){
                k = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;

        }
            return k;
    }
};
