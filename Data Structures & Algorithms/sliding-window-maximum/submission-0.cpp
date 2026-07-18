class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int maxnum=nums[1];
        
        for(int r=k-1;r<nums.size();r++){
            int l=r-k+1;
            int maxnum=nums[l];
            while(l<=r){
                maxnum=max(nums[l],maxnum);
                l++;
            }
            res.push_back(maxnum);
            
        }
        return res;
    };
};
