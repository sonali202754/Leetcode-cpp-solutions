class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    //     int row= grid.size();
    //     int col=grid[0].size();
    //     int n= row*col;
    //    vector<int>hash(n+1,0);
    //     for(int i=0;i<row;i++){
    //         for(int j=0;j<col;j++){
    //             hash[grid[i][j]]++;
    //         }
    //     }
    //     int rep=-1,miss=-1;
    //     for(int i=1; i<=n;i++){
    //         if(hash[i]==2){
    //             rep=i;
    //         }
    //         else if(hash[i]==0){
    //             miss=i;
    //         }
    //         if(rep!=-1&&miss!=-1){
    //             break;
    //         }
    //     }
    //     return {rep,miss};

    // optimal approach
    long long row=grid.size();
    long long col=grid[0].size();
    long long n=row*col;
    long long sn=(n*(n+1))/2;
    long long s2n=(n*(n+1)*(2*n+1))/6;
    long long s=0,s2=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            s+=grid[i][j];
            s2+=(long long)grid[i][j]*(long long)grid[i][j];

        }
    }
        long long val1=s-sn;
        long long val2=s2-s2n;
        val2=val2/val1;
        long long x= (val1+val2)/2;
        long long y= x-val1;
        
    
    return{(int)x,(int)y};
    }
};