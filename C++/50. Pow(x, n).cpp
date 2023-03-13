class Solution {
public:
    double myPow(double x, int n) {
       if(n==0 || x==1){
           return 1;
       }
       double ans = myPow(x,n/2);
       ans*=ans;
       if(n%2==0){
           return ans;
       }
       else{
           if(n<0){
               return ans*(1/x);
           }
           return ans*x;
       }
       
    }
};