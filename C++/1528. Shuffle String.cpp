class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    
      string ans=s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        int pos=indices[i];
        ans[pos]=s[i];
    }
    return ans;
    }
};