class Solution {
public:
   int binarySearchLeft(MountainArray &mountainArr,int start,int end,int target){
    while(start<=end){
    int mid = start+(end-start)/2;
    if(mountainArr.get(mid)==target){
        return mid;
    }
    else if(mountainArr.get(mid)<target){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
 }
 return -1;
   }
   int binarySearchRight(MountainArray &mountainArr,int start,int end,int target){
    while(start<=end){
    int mid = start+(end-start)/2;
    if(mountainArr.get(mid)==target){
        return mid;
    }
    else if(mountainArr.get(mid)>target){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}
   return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int start=0;
        int end = n-1;
        int peak;
        while(start<end){
            int mid = start+(end-start)/2;
            if(mountainArr.get(mid+1)>mountainArr.get(mid)){
                start=mid+1;
                 peak=mid+1;
            }
            else{
            end=mid;
            }
        }
        int left = binarySearchLeft(mountainArr,0,peak,target);
        int right= binarySearchRight(mountainArr,peak,n-1,target);
        return left>=0? left:right;
    }
};