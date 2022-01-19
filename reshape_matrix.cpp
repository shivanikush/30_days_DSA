class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>res(r, vector<int>(c));
        int row_counter = 0;
        int col_counter = 0;
        
        if(mat.size()*mat[0].size()!= r*c) return mat;
       
        
        for(int i = 0; i<mat.size(); i++){
            for(int j =0; j<mat[0].size();j++){
                res[row_counter][col_counter] = mat[i][j];
                col_counter++;
                if(col_counter == c){
                    row_counter++;
                    col_counter = 0;
                }
              
                
            }
        }
        return res;
        
    }
