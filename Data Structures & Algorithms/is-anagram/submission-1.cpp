class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> countS,countT;
        if(s.size() != t.size()) return false;
        for(char c:s){
            countS[c]++;
        }
        for(char c:t){
            countT[c]++;
        }
        for(char c:s){
            if(countT[c] != countS[c]) return false;
        }
        return true;

    }
};
