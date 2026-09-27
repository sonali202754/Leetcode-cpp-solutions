class Solution {
public:
int rese(vector<int>& nums, int lo, int hi,int target){

    if(lo>hi)return -1;
    int mid=lo+(hi-lo)/2;
    if(nums[mid]==target)return mid;
    else if(target>nums[mid])return rese( nums,  mid+1,  hi, target);
    return rese( nums,  lo,  mid-1, target);
}
    int search(vector<int>& nums, int target) {
    //     int n= nums.size();
    //     int lo=0;
    //     int hi=n-1;
    //      while(lo<=hi){
    //         int mid=lo+(hi-lo)/2;
    //         if(nums[mid]==target){
    //             return mid;
    //         }
    //         else if(target>nums[mid]){
    //             lo=mid+1;
    //         }
    //         else  hi=mid-1;
    //      }
    //  return -1;
    int n= nums.size();
    int lo=0;
    int hi=n-1;
    return rese(nums,lo,hi,target);
    }

};