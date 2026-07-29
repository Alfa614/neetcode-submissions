class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<int> st;
        int n = heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int height = heights[st.top()];
                st.pop();

                int leftSmaller = st.empty()?-1 : st.top();
                int rightSmaller = i;
                int width = rightSmaller - leftSmaller - 1;
                maxArea = max(maxArea, height*width);
            }
            st.push(i);
        }
        while(!st.empty()){
            int height = heights[st.top()];
                st.pop();

                int leftSmaller = st.empty()?-1 : st.top();
                int rightSmaller = n;
                int width = rightSmaller - leftSmaller - 1;
                maxArea = max(maxArea, height*width);
        }
        return maxArea;
    }
};
