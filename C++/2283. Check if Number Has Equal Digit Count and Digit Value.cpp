class Solution {
public:
    bool digitCount(string num) {
      unordered_map<int,int>digit;
      for(int i=0; i<num.length(); i++){
          digit[num[i]-'0']++;

      }
      for(int i=0; i<num.length(); i++){
          int compare=i;
          int number = num[i]-'0';
         if (digit[compare]!=number) return false;
      }
      return true;

    }
};