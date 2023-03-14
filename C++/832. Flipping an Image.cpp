class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<vector<int>>res(n);
        int col = image[0].size()-1;
        for(int i=0; i<n; i++){
            for(int j=col; j>=0; j-- ){
            int temp = 1-image[i][j];
                res[i].push_back(temp);
            }

        }
        
        return res;
    }
};