class NumMatrix {
private:
    vector<vector<int>>sumMat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int Rows = matrix.size(),Cols = matrix[0].size();
        sumMat = vector<vector<int>>(Rows + 1 ,vector<int>(Cols+1,0));
        for(int r = 0;r <Rows;r++){
            int prefix = 0;
            for(int c = 0; c<Cols;c++){
                prefix += matrix[r][c];
                int bottom = sumMat[r][c+1];
                sumMat[r+1][c+1] = prefix + bottom;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
       row1++;col1++;row2++;col2++;
       int Right = sumMat[row2][col2];
       int bottom = sumMat[row1-1][col2];
       int left = sumMat[row2][col1-1];
       int top = sumMat[row1-1][col1-1];
       return Right-bottom-left+top; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */