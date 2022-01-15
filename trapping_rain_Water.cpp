class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<= 2){
            return 0;
        }        
        vector<int> left(n,0), right(n,0);
        left.at(0) = height.at(0);
        right.at(n-1) = height.at(n-1);
        
        
        //iterate 
        for(int i = 1; i<n; i++){
            left[i] = max(left[i-1], height[i]);
            right[n-i-1] = max(right[n-i], height[n-i-1]);
            
        }
        int water_level = 0;
        for(int j = 0; j<n; j++){
            water_level+= min(left.at(j), right.at(j)) - height.at(j);
        }
        
     return water_level;   
    }
};
