class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int size=matrix.size(),k;
        vector<vector<int>> c_mat;
        c_mat=matrix;
        for(int i=0;i<size;i++){
            for(int j=0;j<c_mat[i].size();j++){
                if(c_mat[i][j]==0){
                    for(k=0;k<size;k++)
                        matrix[k][j]=0;
                    for(k=0;k<matrix[i].size();k++)
                        matrix[i][k]=0;
                }
            }
        }
    }
};