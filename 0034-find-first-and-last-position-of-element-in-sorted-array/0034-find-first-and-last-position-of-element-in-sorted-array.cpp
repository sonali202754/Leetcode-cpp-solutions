class Solution {
public:
int lower(vector<int>&nums,int target,int n){
    int lo=0;
    int hi= n-1;
    int first=-1;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(nums[mid]>=target){
           first=mid;
          hi=mid-1;
        }
        else {
            lo=mid+1;
        }
       

    }
    return first;

}
int upper(vector<int>&nums,int target,int n){
    int lo=0;
    int hi= n-1;
    int last=n;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(nums[mid]>target){
           last=mid;
           hi=mid-1;
        }
        else {
            lo=mid+1;
        }

    }
    return last;

}
    vector<int> searchRange(vector<int>& nums, int target) {
    //  using lower bound and upper bound
   int n= nums.size(); 
   int first=lower(nums,target,n);
    if(first==-1 || nums[first]!=target) {
         return {-1,-1}; 
    }
     return {first,upper(nums,target,n)-1};


    }
};