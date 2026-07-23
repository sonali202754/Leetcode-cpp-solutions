class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int left,right,sum;
        int result_sum=0;
        int max_diff=INT_MAX;
        for(int i=0;i<n-2; i++){
            left=i+1;
            right=n-1;
            while(left<right){
            sum=nums[i]+nums[left]+nums[right];
           int diff=abs(sum-target);
           if(max_diff>diff){
            max_diff=diff;
            result_sum=sum;
           }
           if(sum==target)return result_sum;
           else if(sum<target)left++;
           else right--;
        }
        }
        return result_sum;
    }
};