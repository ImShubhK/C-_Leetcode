class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> res;
        vector<int>result;
        int element = nums.size()/3;
        for(int i=0; i<nums.size(); i++){
            res[nums[i]]++;
        }

        for(auto j:res){
            if(j.second>element) result.push_back(j.first);
        }
        return result;
    }
};