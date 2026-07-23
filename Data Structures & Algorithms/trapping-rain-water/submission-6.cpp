class Solution {
public:
    int trap(vector<int>& height) {
        
        int output =0;
        for(int i=1;i<height.size()-1;i++){
            int l=0,r=height.size()-1;
            int maxLeft=0;
        int maxRight=0;
            while(l<i){
                maxLeft=max(maxLeft,height[l]);
                l++;
            }
            while(r>i){
                maxRight=max(maxRight,height[r]);
                r--;
            }
            int res= min(maxLeft,maxRight)-height[i];
            if(res<0) res=0;
            output+=res;
        }
        return output;
    }
};
