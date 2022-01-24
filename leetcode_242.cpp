bool isAnagram(string s, string t){
  if(s.length() != t.length()) return false;
  std::multiset<char> s1(s.begin(), s.end());
  std::multiset<char> s2(t.begin(), t.end());
  return std::includes(s2.begin(), s2.end(), s1.begin(), s1.end());
}
