class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int lo=0,hi=0,k;
        int res=INT_MIN;
        if(n==0) return 0;
        unordered_map<char,int>f;
        for(int hi=0;hi<n; hi++){
            f[s[hi]]++;
             k= hi-lo+1;
            while(f.size()<k){
                f[s[lo]]--;
                if(f[s[lo]]==0){
                    f.erase(s[lo]);
                    
                }
                lo++;
                k=hi-lo+1;
            }
            int len= hi-lo+1;
            res= max(res,len);
        }
        return res;
    }
};