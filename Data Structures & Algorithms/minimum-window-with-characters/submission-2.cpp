class Solution {
public:
    string minWindow(string s, string t) {
       unordered_map<char,int> window,countT;
       pair<int,int> res;
       for(char c:t){
        countT[c]++;
       }
       int l=0;
       int reslen =INT_MAX;
       int have =0;
       int need=countT.size();
       for(int r=0;r<s.size();r++){
        int c=s[r];
        window[c]++;
        if(window[c]==countT[c]){
            have++;
        }
        while(have==need){
            if(reslen>(r-l+1)){
                reslen=r-l+1;
                res={l,r};
            }
            window[s[l]]--;
            if(countT.count(s[l])&& countT[s[l]]>window[s[l]]){
                have--;
            }
            l++;
        }
       }
       return reslen==INT_MAX? "":s.substr(res.first,reslen);
    }
};
