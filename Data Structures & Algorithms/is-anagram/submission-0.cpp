class Solution {
public:
    bool isAnagram(string s, string t) {
        bool res = true;
        unordered_map <char, int > freq ;
        if (s.size() != t.size()){
            res =false;
        
        }
        else{
        for (char c : s){
            freq[c]++;
        }
        for (char v : t){
            freq[v]--;
        }
        for (const auto& [Key, Val] : freq){
            if (Val != 0){
              res = false;
            }
        }
            
        }
        
        return res;
    }
};
