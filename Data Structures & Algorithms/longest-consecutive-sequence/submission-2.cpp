class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> v(nums.begin(),nums.end());
       int longest=0;
       for(int n:nums){
        if(v.find(n-1) ==v.end()){
        int length=1;
        while(v.find(n+length) != v.end()){
            length++;
        }
        longest=max(longest,length);
       }
       }
       return longest;
    }
};
