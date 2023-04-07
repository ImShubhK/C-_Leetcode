// class Solution {
// public:
// int k=0;
//     int solve(vector<int>& prices,int i,int n,int mini,int max){
//         if(i>=n)
//         return max;
//         if(prices[i]<mini)
//         mini=prices[i];
//          k=prices[i]-mini;
//         if(k>max)
//         max=k;
//         return solve(prices,i+1,n,mini,max);
//     }
//     int maxProfit(vector<int>& prices) {
//         return solve(prices,0,prices.size(),INT_MAX,0);
//     }
// }; 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
           minprice=min(minprice,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
        
    }
};