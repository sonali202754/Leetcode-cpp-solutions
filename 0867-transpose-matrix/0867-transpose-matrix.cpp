class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
         vector<vector<int>> tns(n, vector<int>(m));
        for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            tns[i][j]=matrix[j][i];
        }
    }
        return tns;
    }
};