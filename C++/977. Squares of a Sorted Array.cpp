class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>sqrt;
        for(int i=0; i<nums.size(); i++){
              sqrt.push_back(nums[i]*nums[i]);
        }
        sort(sqrt.begin(), sqrt.end());
        return sqrt;
    }
};