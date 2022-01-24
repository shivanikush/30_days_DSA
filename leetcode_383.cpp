bool canConstruct(string ransomNote, string magazine) { 
        std::multiset<char> mag(magazine.begin(), magazine.end());
        std::multiset<char> rans(ransomNote.begin(), ransomNote.end());
        return std::includes(mag.begin(),mag.end(), rans.begin(), rans.end());
        
    }
