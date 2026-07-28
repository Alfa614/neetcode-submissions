class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto& c : tokens){
            if(c=="+"|| c=="-" || c=="*" || c=="/"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                
                if(c=="+")
                    st.push(first + second);
                if(c=="-")
                    st.push(second - first);
                if(c=="*")
                    st.push(first * second);
                if(c=="/")
                    st.push(second / first);
            }
            else
                st.push(stoi(c));
        } 
        return st.top();
    }
};
