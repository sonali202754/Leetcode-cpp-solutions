class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        int left,right,sum;
        vector<vector<int>>result;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            left=i+1;
            right=n-1;
            sum=-1*nums[i];
        
        while(left<right){
            int s= nums[left]+nums[right];
            if(s==sum){
           result.push_back({
            nums[i],
            nums[left],
            nums[right]
           });
           left++;
           right--;
            
        
        while(left<n&&nums[left]==nums[left-1]){
            left++;
        }
        while(right>=0&&nums[right]==nums[right+1]){
            right--;
        }
            }
        
      else if(s<sum){
        left++;
      }
      else right--;
        }
        }
        
        return result;
    }
};