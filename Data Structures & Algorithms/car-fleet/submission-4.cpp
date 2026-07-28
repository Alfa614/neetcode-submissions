class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        for(int i=0;i<speed.size();i++)
            cars.push_back({position[i],speed[i]});
        
        sort(cars.begin(),cars.end(),greater<pair<int,int>>());
        stack<double> st;

        for(auto car: cars){
            double time = double(target-car.first)/car.second;
            cout<<time;
            if(st.empty()){
                st.push(time_taken);
            }
            else{
                if(time_taken > st.top()){
                    st.push(time_taken);
                }
            }  
        }
        return st.size();
    }
};
