class Solution {
    int countStep(int num, int count){
        if(num==0){
            return count;
        }
        if(num%2==0){
          return countStep(num/2, count+1);
        }
        else{
          return  countStep(num-1, count+1);
        }
       
    }
public:
     int numberOfSteps(int num) {
         int count =0;
    //    while(num>0)
    //     {
    //         if(num%2==0) num/=2;
    //         else num-=1;
    //         count++;
    //     }
    //      return count;   
         return countStep(num ,count);
    }
};