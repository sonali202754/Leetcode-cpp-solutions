class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //  sort(nums.begin(), nums.end());
    //  return nums [ (nums.size()/2)];  
     // brute 
    //  int n= nums.size();
    //  for(int i=0;i<n;i++){
    //    int count=1;
    //    for(int j=i+1; j<n;j++){
    //     if(nums[i]==nums[j])count++;
    //    }
    //    if(count>n/2) return nums[i];
    //  }
    //  return -1;
    // }
    // // better approch
    int n= nums.size();
    map<int,int>mp;
    for(int i=0; i<n;i++){
        mp[nums[i]]++;
    }
    for(auto it :mp){
        if(it.second>n/2){
            return it.first;
        }

    }
     return -1;
    }

};