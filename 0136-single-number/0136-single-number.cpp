class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int n= nums.size();
        // for(int i=0; i<n; i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j])count++;
        //     }
        //      if(count==1)return nums[i];
        // }
        // return -1;
        //using has map better solution
        // int n=nums.size();
        // map<int,int>mp;
        // for(int i=0; i<n; i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp){
        //     if(it.second==1)
        //     return it.first;
        // }
        // return -1;
        //optimal solution
        int xorr=0;
        int n= nums.size();
        for(int i=0; i<n; i++){
           xorr=xorr^nums[i];
        }
        return xorr;
    }
};