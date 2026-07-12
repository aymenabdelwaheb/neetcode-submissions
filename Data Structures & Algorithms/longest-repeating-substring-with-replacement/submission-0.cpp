class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        int maxNum=0;
        unordered_map<char,int> freq;
        int l=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]]++;
            maxNum=max(maxNum,freq[s[r]]);
            if((r-l+1-maxNum)>k){
                freq[s[l]]--;
                l++;
            }
            
            res=max(res,r-l+1);
            
        }
        return res;
    }
};
