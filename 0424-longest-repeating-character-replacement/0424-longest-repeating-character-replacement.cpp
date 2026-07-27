class Solution {
public:
int find(vector<int>&f){
    int maxc=-1;
    for(int i=0; i<256;i++){
        maxc=max(maxc,f[i]);
    }
    return maxc;
}
    int characterReplacement(string s, int k) {
       int n= s.size();
       int lo=0,hi=0;
       int res=INT_MIN;
       vector<int>f(256,0);
       for(int hi=0;hi<n; hi++){
        f[s[hi]]++;
        int len=hi-lo+1;
        int maxcount=find(f);
        int diff=len-maxcount;
        while(diff>k){
            f[s[lo]]--;
            lo++;
            maxcount=find(f);
            len=hi-lo+1;
            diff=len-maxcount;
        }
        // diff<k||diff==k
        len= hi-lo+1;
        res=max(res,len);
       }
       return res; 
    }
};