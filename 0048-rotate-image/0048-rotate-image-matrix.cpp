class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        vector<vector<int>>rotated(n, vector<int>(n,0));
        int RowSize = matrix.size();
        int ColSize = matrix[0].size();
        for(int i=0;i<RowSize;i++)
        {
            for(int j=0;j<ColSize;j++)
            {
                rotated[j][(ColSize-1)-i] = matrix[i][j];
            }
        }
        for(int i=0;i<RowSize;i++)
        {
            for(int j=0;j<ColSize;j++)
            {
                matrix[i][j] = rotated[i][j];
            }
        }
        
    }
};