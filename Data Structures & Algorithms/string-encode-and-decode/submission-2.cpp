

class Solution {
public:

    string encode(vector<string>& strs) {
       string res;
       for(string s:strs){
        res.append(to_string(s.size()));
        res.push_back('#');
        res.append(s);
       }
       return res;
       }
    

    vector<string> decode(string res){
        
        
        vector<string> s;
        int i=0;
        while(i<res.size()){
            int j=i;
            while(res[j] != '#'){
                j++;}
                int n=stoi(res.substr(i,j-i));
                i=j+1;
                
                    s.push_back(res.substr(i,n));
                    i+=n;
            
        }
        return s;
    }
};