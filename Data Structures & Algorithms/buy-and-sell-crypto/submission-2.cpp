class Solution {
public:
    int maxProfit(vector<int>& price) {
        int l=0, r=1;
        int s=0;
        while(r<price.size()){
        if(price[l]<price[r]){
            s=max(s,price[r]-price[l]);
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
