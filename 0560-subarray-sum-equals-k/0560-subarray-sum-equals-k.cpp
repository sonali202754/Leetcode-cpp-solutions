class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        // int n= arr.size();
    //     vector<int>pre(n,0);
    //     pre[0]=arr[0];
    //     for(int i=1; i<n; i++){
    //         pre[i]=arr[i]+pre[i-1];
    //     }
    //     unordered_map<int,int>mp;
    //     int count=0;
    //     for(int i=0; i<n; i++){
    //     if(pre[i]==k){
    //     count++;
    //     }
    //     int rem=pre[i]-k;
    // if(mp.find(rem)!=mp.end())count+=mp[rem];
    // mp[pre[i]]++;
    //     }
 int n= arr.size();
 int prefixsum=0,count=0;
 unordered_map<int,int>prefixsumcount;
 prefixsumcount[0]=1;
 for(int i=0; i<n; i++){
      prefixsum+=arr[i];
      int remove= prefixsum-k;
     if(prefixsumcount.find(remove)!=prefixsumcount.end()){
        count+=prefixsumcount[remove];
     }
     prefixsumcount[prefixsum]++;

 }


        return count;
    }
};