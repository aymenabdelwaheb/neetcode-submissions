class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        int l=0,r=0;
        vector<int> res;
        while(r<nums.size()){
            while(!q.empty() && nums[q.back()]<nums[r]){
                q.pop_back();
            }
            q.push_back(r);
            if(r-l+1>=k){
                res.push_back(nums[q.front()]);
                l++;
            }
            if(l>q.front()){
                q.pop_front();
            }
            r++;
        }
        return res;
    
    }
};
