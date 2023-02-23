class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>order;
        map<int,string> person;
        for(int i=0; i<heights.size(); i++){
            person[heights[i]]=names[i];

        }
        for(auto j:person){
            order.push_back(j.second);
        }
        reverse(order.begin(), order.end());
        return order;
    }
};