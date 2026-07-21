class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                if((j-i)*min(heights[i],heights[j])>max)
                    max = (j-i)*min(heights[i],heights[j]);
            
        }
    }
        return max;
    }
};
