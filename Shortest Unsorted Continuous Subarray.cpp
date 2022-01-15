class Solution {
public:
   
    int findUnsortedSubarray(vector<int>& nums) {
        int max_left = INT_MIN;
        int min_right = INT_MAX;
        int n = nums.size();
        vector<int> left(n), right(n);
        for(int i = n-1; i>=0; i--){
            right[i] = min_right = min(min_right, nums[i]);
        }
        for(int i =0; i<n ; i++){
            left[i] = max_left = max(max_left, nums[i]);
        }
        int i = 0;
        int j = n-1;
        while(i<n && nums[i]<= right[i]){
            i++;
        }
        while(j>i && nums[j]>= left[j]){
            j--;
        }
        
     return j+1-i;   
    }
};
