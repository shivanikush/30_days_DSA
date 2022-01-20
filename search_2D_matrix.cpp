//binary search approach
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int left = 0;
        int right = matrix[0].size()-1;
        
        while(left<n & right>=0){
            if(matrix[left][right] == target){
                return true;
            }
            if(target< matrix[left][right]){
              right--;  
            }
            else{
                left++;
            }
        }
       return false; 
    }
    
