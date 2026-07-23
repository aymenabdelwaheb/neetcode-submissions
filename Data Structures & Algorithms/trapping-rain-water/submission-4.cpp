class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }

        int area=0;
        int res;
        for(int i=1;i<height.size()-1;i++){
        int l=0;
        int r=height.size()-1;
        int maxLeft=height[l];
        int maxRight=height[r];  
        while(r>i){
            maxRight=max(maxRight,height[r]);
            r--;
        }
         while(l<i){
            maxLeft=max(maxLeft,height[l]);
            l++;
        }
        res = min(maxRight,maxLeft)-height[i];
        if(res<0){ res=0;}
          area+=res;
        }
        
        

        return area;    
    }
};
