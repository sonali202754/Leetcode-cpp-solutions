class Solution {
public:
vector<int>generaterows(int row){
    vector<int>genrow;
    long long ans=1;
    genrow.push_back(1);
    for(int col=1; col<row; col++){
        ans=ans*(row-col);
        ans=ans/(col);
        genrow.push_back(ans);
    }
    return genrow;
}
    vector<vector<int>> generate(int numRows) {
    //     int m= numRows;
    //     vector<vector<int>>v;
    //     for(int i=0;i<m;i++){
    //         vector<int>a(i+1);
    //         v.push_back(a);
    //         for(int j=0;j<=i;j++){
    //             if(j==0||j==i){
    //                 v[i][j]=1;
    //             }
    //             else{
    //                 v[i][j]=v[i-1][j]+v[i-1][j-1];
    //             }
    //         }
    //     }
    //     return v;

      vector<vector<int>>ans;
      for(int i=1;i<=numRows; i++){
        ans.push_back(generaterows(i));

      }
      return ans;
    }
};