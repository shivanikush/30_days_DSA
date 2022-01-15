int order(vector<int> v, int i){
        int num = v[i];
        
        if(i == 0){
            return num > v[1];
        }
        if(i == v.size() - 1){
            return num < v[i - 1];
        }
        return num > v[i + 1] or num<v[i - 1];
    }
    int findUnsortedSubarray(vector<int>& nums) {
        int small = INT_MAX;
        int largest = INT_MIN;
        
        for(int i = 0; i<nums.size(); i++){
            int temp = nums.at(i);
            
            
            if(order(nums, i)){
                small = min(small, temp);
                largest = max(largest, temp);
            }
        }
        int left = 0;
        if(small == INT_MAX){
            return 0;
        }
        while(small >= nums.at(left)){
            left++;
        }
        int right = nums.size() - 1;
        while(largest <= nums.at(right)){
            right--;
        }
        
        
        return right - left <0 ? 0: right - left + 1;
        
    }
