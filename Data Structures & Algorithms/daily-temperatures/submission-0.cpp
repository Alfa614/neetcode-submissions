class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> answers(n,0);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                answers[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty()){
            answers[st.top()] = 0;
            st.pop();
        }
        return answers;
    }
};
