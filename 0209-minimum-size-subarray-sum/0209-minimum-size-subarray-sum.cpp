class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n= nums.size();
       int lo=0,hi=0;
       int res=INT_MAX;
       int sum=0,len;
       bool flag=false;
       while(hi<n){
        sum=sum+nums[hi];
        while(sum>=target){
            len=hi-lo+1;
            res=min(res,len);
            flag=true;
          sum=sum-nums[lo];
          lo++;
        }
        hi++;
       }
       if(flag==false) return 0;
       return res;
    }
};