class Solution {
public:
int lower(vector<int>&nums,int n,int target){
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
int upper(vector<int>&nums,int n,int target){
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
pair<int,int>fso(vector<int>&nums,int n,int k){
    int lb=lower(nums,n,k);
    if(lb==-1||nums[lb]!=k)return {-1,-1};
    return {lb,upper(nums,n,k)-1};
}
    vector<int> searchRange(vector<int>& nums, int target) {
    //  using lower bound and upper bound
   int n= nums.size(); 
   pair<int,int> ans=fso(nums,n,target);

    return {ans.first,ans.second};


    }
};