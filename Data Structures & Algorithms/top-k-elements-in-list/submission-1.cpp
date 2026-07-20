class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<vector<int>> res(nums.size()+1);
        for(int n:nums){
            freq[n]++;
        }
        for(const auto& entry: freq){
            res[entry.second].push_back(entry.first);
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
