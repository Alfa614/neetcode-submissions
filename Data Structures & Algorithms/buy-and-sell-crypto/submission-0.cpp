class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min) min = prices[i];
            int tempprof=prices[i]-min;
            if(tempprof>profit) profit=tempprof;
        }
        return profit;
    }
};
