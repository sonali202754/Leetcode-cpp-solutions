class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int left,right;
        long long sum=0;
        for(int i=0;i<n-3;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                 if(j>i+1&&nums[j]==nums[j-1]) continue;
                 left=j+1;
                 right=n-1;
                 while(left<right){
                    
                    sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        res.push_back({
                            nums[i],
                            nums[j],
                            nums[left],
                            nums[right]
                        });
                        left++;
                        right--;
                    
                   while(left<n&&nums[left]==nums[left-1]){
                    left++;
                   }
                   while(right>0&&nums[right]==nums[right+1]){
                    right--;
                   }
                    }
                   else if(sum<target) {
                    left++;
                   }
                   else {
                    right--;
                   }
                 }
            }
        }
        
        return res;
    }
};