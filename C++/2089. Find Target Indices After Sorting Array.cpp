class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ind;
        sort(nums.begin(),nums.end());
       for(int i=0; i<nums.size(); i++){
           if(nums[i]==target){
               ind.push_back(i);
       }
       }
    return ind;
    }
};