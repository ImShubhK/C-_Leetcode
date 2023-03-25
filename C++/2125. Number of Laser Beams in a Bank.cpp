class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       vector<int>temp;
       for(int i=0; i<bank.size(); i++){
           int count =0; 
           for(int j=0; j<bank[i].size(); j++){
               if(bank[i][j]=='1'){
                   count++;
               }
           }
            if(count!=0){
                   temp.push_back(count);
               }
       }
       int ans =0;
       if(temp.size()==0) return 0;
       for(int i=0; i<temp.size()-1; i++){
           ans+=temp[i]*temp[i+1];
       }
       return ans;
    }
};