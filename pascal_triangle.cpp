class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pastri(numRows);
        for(int i=0;i<numRows;i++){
            pastri[i].resize(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || i==j)
                    pastri[i][j]=1;
                else
                    pastri[i][j]=pastri[i-1][j-1]+pastri[i-1][j];
            }
        }
        return pastri;
    }
};