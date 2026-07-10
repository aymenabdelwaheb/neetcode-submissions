class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0, r=1;
        int s=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int profit=prices[r]-prices[l];
                s=max(s,profit);
                r++;

            }
            else{
                l=r;
                r++;
            }
        }
        return s;
    }
};
