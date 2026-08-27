class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int row= grid.size();
        int col=grid[0].size();
        int n= row*col;
       vector<int>hash(n+1,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                hash[grid[i][j]]++;
            }
        }
        int rep=-1,miss=-1;
        for(int i=1; i<=n;i++){
            if(hash[i]==2){
                rep=i;
            }
            else if(hash[i]==0){
                miss=i;
            }
            if(rep!=-1&&miss!=-1){
                break;
            }
        }
        return {rep,miss};
    }
};