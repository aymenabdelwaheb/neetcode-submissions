class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++;
        }
        vector<vector<int>> res(nums.size()+1);
        for(auto p:freq){
            res[p.second].push_back(p.first);
        }
        vector<int> output;
        for(int i=nums.size();i>0;i--){
            for(int n:res[i]){
                output.push_back(n);
                if(output.size() == k){
                    return output;
                }
            }
        }
        return output;
        }
};
