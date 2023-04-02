class Solution {
public:
    int subArrCount(vector<int>& nums,int mid){
     int count=1;
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]+sum > mid)
            {
                count++;
                sum=nums[i];
            }
            else
            sum+=nums[i];
        }
        return count;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int res =low;
        while(low<=high){
            int mid = low +(high-low)/2;
            int count = subArrCount(nums,mid);
            if(count>k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
                res=mid;
            }
        }
        return res;
        
    }
};