class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // brute force 
    int left=0;
    int right=0;
    int index=0;
    vector<long long>nums3(m+n);
    while(left<m&&right<n){
        if(nums1[left]<=nums2[right]){
          nums3[index]=nums1[left];
          index++;left++;
        }
        else {
            nums3[index]=nums2[right];
            index++;right++;
        }
    } 
    while(left<m){
        nums3[index++]=nums1[left++];
    }
    while(right<n){
        nums3[index++]=nums2[right++];
    }
    for(int i=0;i<m+n; i++){
         nums1[i]=nums3[i];
        //else nums2[i-n]=nums3[i];
    }
    }
    
};
