class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
    //    vector<int>Leftsum;
    //    int sum=0;
    //    Leftsum.push_back(sum);
    //     vector<int>diffrence;
        
    //    for(int i=0; i<nums.size(); i++){
           
    //         sum+=nums[i];
    //         Leftsum.push_back(sum);
    //    }
    //    int rsum =0;
    //     vector<int>Rightsum;
    //     Rightsum.push_back(rsum);
    //    for(int j=nums.size()-1; j>=1; j--){
           
    //          rsum+=nums[j];
    //          Rightsum.push_back(rsum);
    //    }
    //    reverse(Rightsum.begin(),Rightsum.end());
    //    for(int k=0; k<nums.size(); k++){
    //         diffrence.push_back(abs(Leftsum[k]-Rightsum[k]));
    //    }
    //    return diffrence;
     vector<int> ans;
        int lsum = 0, rsum = 0;
        for(int i = 0; i < nums.size(); ++i ) rsum += nums[i];
        for(int i = 0; i < nums.size(); ++i){
            rsum -= nums[i];
            ans.push_back(abs(lsum - rsum));
            lsum += nums[i];
        }
        return ans;
    }
};