class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0; i<s.size(); i+=2*k ){
            string p = s.substr(i,k);
            reverse(p.begin(), p.end());
              s.replace(i,k,p);          
        }
        return s;
    }
};