class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int lo=0,hi=0;
        int res=INT_MIN;
        unordered_map<int,int>f;
      for(int hi=0;hi<n;hi++){
        f[fruits[hi]]++;
        while(f.size()>2){
            f[fruits[lo]]--;
            if(f[fruits[lo]]==0){
                f.erase(fruits[lo]);
                
            }
            lo++;
        }
            int len= hi-lo+1;
            res=max(len,res);
        
      }
      
      return res;
    }
};