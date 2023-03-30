class Solution {
public:
    int maximumCount(vector<int>& nums) {
     
    if(nums[0]==nums[nums.size()-1] && nums[0]==0)
        return 0;
    int start = 0;
    int end = nums.size() - 1;
    int neg = 0;
    int pos = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < 0)
        {
            neg = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    start = 0;
    end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] > 0)
        {
            pos = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    int ans=0;
    if(neg+1>nums.size()-pos)
        ans=neg+1;
    else
        ans=nums.size()-pos;
    return ans;
     
    } 
};