class Solution {
public:
    int maxProfit(vector<int>& price) {
        int l=0, r=1;
        int s=0;
        int res;
        while(r<price.size()){
        if(price[l]<price[r]){
            res=price[r]-price[l];
            s=max(s,res);
            r++;
        }
        else {
            l=r;
            r++;
        }
        }
        return s;

    }
};
