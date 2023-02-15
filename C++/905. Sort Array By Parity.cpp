class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>res;
        for(auto i:nums)
         if(!(i&1))
            res.push_back(i);
        for(auto i:nums)
            if(i&1)
             res.push_back(i);
        return res;
    }
};