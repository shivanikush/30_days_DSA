/*approach 
create 3 set row,col, block to keep track of whcih row,col and block we are in 
then iterate and check if the current values in map matches with the upcoming then return false
if the . matches then continue iterating
*/

bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9), col(9), block(9);
        
        for(int i= 0; i<9; i++){
            for(int j= 0; j<9; j++){
                if(board[i][j] == '.') continue;
                
                
                int curr = board[i][j] - '0';
                if(row[i].count(curr) || col[j].count(curr) || block[(i/3)*3 + (j/3)].count(curr)){
                    return false;
                }
                row[i].insert(curr);
                col[j].insert(curr);
                block[(i/3)*3+(j/3)].insert(curr);
            }
        }
        return true;
    }
