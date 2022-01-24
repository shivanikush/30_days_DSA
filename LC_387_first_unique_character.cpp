int firstUniqChar(string s) {
        unordered_map<char, int> ma;
        
        for(char c : s){
            ma[c]++;
        }
        for(int i = 0; i<s.size(); i++){
            if(ma[s[i]] == 1) return i;
            
        }
        return -1;
    }
