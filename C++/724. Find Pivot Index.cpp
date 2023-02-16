class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int arrsum =0;
        for(int i=0; i<nums.size(); i++){
            arrsum+=nums[i];
        }
             int sum =0;
             int res = -1;
             for(int i=0; i<nums.size(); i++){
                 sum+=nums[i];
                 if(sum==arrsum){
                     res =i;
                     break;
                 }
                arrsum-=nums[i];
             }
             return res;
    }
};