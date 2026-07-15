class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false;
        vector<int> s1Count(26,0);
        vector<int> s2Count(26,0);
        int matches=0;
        for(int i=0;i<s1.length();i++){
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(s1Count[i]==s2Count[i]){
                matches++;
            }
        }
        int l=0;
        for(int r=s1.length();r<s2.length();r++){
            if(matches==26) return true;
            int index=s2[r];
            s2Count[index - 'a']++;
            if(s2Count[index - 'a'] == s1Count[index - 'a'] ) matches++;
            else if(s2Count[index - 'a'] == s1Count[index - 'a']+1 ) matches--;
            index=s2[l];
            s2Count[index - 'a']--;
            if(s2Count[index - 'a'] == s1Count[index - 'a'] ) matches++;
            else if(s2Count[index - 'a']+1 == s1Count[index - 'a'] ) matches--;
            l++;
        }
        return matches==26;
    }
};
