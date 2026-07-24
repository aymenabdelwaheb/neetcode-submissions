class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int l=0,r=0;
    int longest=0;
    unordered_set<char> set;
    while(r<s.size()){

    while(r<s.size() && set.find(s[r])==set.end()){
        set.insert(s[r]);
        r++;
        
    }
    longest=max(longest,r-l);
    set.erase(s[l]);
    l++;
    }
    return longest;

    }
};
