class Solution {
public:
void swapgreater(vector<int>& nums1, int m, vector<int>& nums2, int n){
    if(nums1[m]>nums2[n]){
        swap(nums1[m],nums2[n]);
    }
}
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // brute force 
    // int left=0;
    // int right=0;
    // int index=0;
    // vector<long long>nums3(m+n);
    // while(left<m&&right<n){
    //     if(nums1[left]<=nums2[right]){
    //       nums3[index]=nums1[left];
    //       index++;left++;
    //     }
    //     else {
    //         nums3[index]=nums2[right];
    //         index++;right++;
    //     }
    // } 
    // while(left<m){
    //     nums3[index++]=nums1[left++];
    // }
    // while(right<n){
    //     nums3[index++]=nums2[right++];
    // }
    // for(int i=0;i<m+n; i++){
    //      nums1[i]=nums3[i];
    //     //else nums2[i-n]=nums3[i];
    // }
    
    // optimal solution
//     int left= m-1;
//     int right=0;
//     while(left>=0&&right<n){
//         if(nums1[left]>nums2[right]){
//             swap(nums1[left],nums2[right]);
//             left--;right++;
//         }
//         else{
//             break;
//         }
//     }

// //    sort(nums1,nums1+m);
// //    sort(nums2,nums2+n);
// sort(nums1.begin(), nums1.end()+m);
// sort(nums2.begin(), nums2.end());
// for (int i = 0; i < n; i++) {
//     nums1[m + i] = nums2[i];
// }
// second optimal 

int len=m+n;
int gap=(len/2)+(len%2);

while(gap>0){
    int left= 0;
int right=left+gap;
    while(right<len){

        // arr1 and arr2
        if(left<m&&right>=m){
            swapgreater(nums1,left,nums2,right-m);
        }
        // arr2 and arr2
        else if(left>=m){
            swapgreater(nums2,left-m,nums2,right-m);
        }
        else{
            swapgreater(nums1,left,nums1,right);
        }
        left++;right++;
    }

if(gap==1)break;

gap=(gap/2)+(gap%2);
}
 for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
    
};
