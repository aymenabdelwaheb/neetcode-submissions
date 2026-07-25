class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        vector<int> output;
        deque<int> q;
        for(int r=0;r<n;r++){
            while(!q.empty() && nums[r]>nums[q.back()]){
                q.pop_back();
            }
            q.push_back(r);
        
        if(r-l+1>=k){
            l++;
            output.push_back(nums[q.front()]);

        }
        if(l>q.front()){
            q.pop_front();

        }
        }
        return output;
    
    }
};
