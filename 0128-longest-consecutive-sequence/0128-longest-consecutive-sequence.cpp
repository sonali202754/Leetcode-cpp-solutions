class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0)return 0;
        sort(nums.begin(),nums.end());
        int currentcount=0;
        int longest=1;
        int lastsmaller=INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]-1==lastsmaller){
                currentcount+=1;
                lastsmaller=nums[i];
            }
            else if(lastsmaller!=nums[i]){
                currentcount=1;
                lastsmaller=nums[i];
            }
        
        longest=max(longest,currentcount);
        }
        return longest;
        
    }
};