class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // finding the size of nums
        int n = nums.size();
        //using unordered_Set
        unordered_set<int> s;
        
        //inserting elements in the set
        for(int x : nums){
            s.insert(x);
        }
        //iterating over the set
        int largestLen = 0;
        for(auto element : s){
            int parent = element - 1;
            
            if(s.find(parent) == s.end()){
                //finding the largest chain by iterating to next numbers
                int next_num = element + 1;
                int count = 1; 
                
                while(s.find(next_num)!= s.end()){
                    next_num++;
                    count++;
                }
                if(count > largestLen){
                    largestLen = count;
                }
               
            }
        }
        return largestLen;
    }
};
