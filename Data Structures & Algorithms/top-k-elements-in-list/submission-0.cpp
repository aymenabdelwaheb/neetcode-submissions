class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output;
        unordered_map<int,int> freq;
        for(auto i : nums){
            freq[i]++;
        }
        vector<pair<int,int>> v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](const auto& a,const auto& b)
        {
            return a.second >b.second ;
        });
     for(int i=0;i<k;i++){
         output.push_back(v[i].first);
     }
     return output;
    }
};
