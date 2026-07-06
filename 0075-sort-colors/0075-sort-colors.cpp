class Solution {
public:
    void sortColors(vector<int>& nums) {
       // firstuse two pass method
    //    int n= nums.size();
    //    int noo=0;
    //    int noz=0;
    //    int now=0;
    //    for(int i=0; i<n; i++){
    //     if(nums[i]==0) noz++;
    //     else if(nums[i]==1)noo++;
    //     else now++;
    //    }
    //    for(int i=0; i<n; i++){
    //     if(i<noz) nums[i]=0;
    //     else if(i<(noz+noo)) nums[i]=1;
    //     else nums[i]=2;
    //    }
    
    // now use two pointer method or dutch flag method
     int n= nums.size();
    int low=0;
    int mid=0;
    int hi=n-1;
    while(mid<=hi){
        if(nums[mid]==2){
            int temp=nums[mid];
            nums[mid]=nums[hi];
            nums[hi]=temp;
            hi--;

        }
        else if(nums[mid]==0){
           int temp=nums[mid];
           nums[mid]=nums[low];
           nums[low]=temp;
           low++;
           mid++;

        }
        else mid++;
    }
}
};