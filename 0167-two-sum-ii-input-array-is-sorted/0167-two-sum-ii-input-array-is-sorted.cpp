class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // we use the two pointer approch becuse here first told that array then told that find two pair index and it is sorte so we definently use two pointer approch
        vector<int>ans;
        int n= numbers.size();
        int i=0;
        int j=n-1;
        int sum=0;
        while(i<j){
           sum= numbers[i]+numbers[j];
           if(sum==target){
           ans.push_back(i+1);
           ans.push_back(j+1);
           return ans;
        }
           else if(sum<target)i++;
           else j--; //sum>target
        }
      return ans;
    }
};