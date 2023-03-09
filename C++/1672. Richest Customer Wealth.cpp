class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int total; int richest = 0;
        for(int i=0; i<accounts.size(); i++){
                   total =0;
            for(int j=0; j<accounts[0].size(); j++){
                  total+= accounts[i][j];
                 if(richest<total)
          {
            richest = total;
          }     
        }
        }
        return richest;
    }
};