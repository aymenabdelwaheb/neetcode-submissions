class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<vector<int>> res(nums.size()+1);
        vector<int> output;
        for(int n:nums){
            freq[n]++;
        }
        for(auto p:freq){
            res[p.second].push_back(p.first);
        }
        for(int i=nums.size();i>0;i--){
            for(auto n:res[i]){
                output.push_back(n);
                if(output.size() == k){
                    return output;
                }
            }
        }

        return output;

        }
    
};
