class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>ans;
       map<int,int>mp;
       int n=nums.size();
       for(int i=0;i<n;i++){
          int num=nums[i];
          int moreneeded=target-num;
          if(mp.find(moreneeded)!=mp.end()){
              ans.push_back(mp[moreneeded]);
              ans.push_back(i);
          }
          mp[num]=i;
       }
       return ans;
    }
};