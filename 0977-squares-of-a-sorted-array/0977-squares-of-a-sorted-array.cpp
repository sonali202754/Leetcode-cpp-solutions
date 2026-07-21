class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int p=nums.size();
        vector<int>neg;
        vector<int>pos;
        for(int i=0;i<p; i++){
        if(nums[i]>=0){
            pos.push_back(nums[i]);
        }
        else {
            neg.push_back(nums[i]);
        }
        }
        if(neg.size()==0){
            //sob positive
            for(int i=0; i<p; i++){
                nums[i]=nums[i]*nums[i];
            }
            return nums;
        }
       else if(pos.size()==0){
            //sob negative
             for(int i=0; i<p; i++){
                nums[i]=nums[i]*nums[i];
            }
            reverse(nums.begin(),nums.end());
            return nums;
        }
        // eber holo je array jate positive negative duto e thkbe
        // as it is merge sort
        int i=0,j=0;
        int n= neg.size();//negative
        int m= pos.size();//post
        int idx=0;
        vector<int>res(n+m);

        for(int i=0; i<n; i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
       
        for(int j=0; j<m; j++){
            pos[j]=pos[j]*pos[j];
        }
        

        while(i<n && j<m){
            if(neg[i]<=pos[j]) {
                res[idx]=neg[i];
                idx++;
                i++;
            }
            else{
                res[idx]=pos[j];
                idx++;
                j++;
            }
    
        }
        while(i<n){
            res[idx]=neg[i];
            idx++;
            i++;
        }
        while(j<m){
            res[idx]=pos[j];
            idx++;
            j++;
        }
        return res;

    }
};