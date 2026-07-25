class Solution {
public:
    int maxProfit(vector<int>& price) {
        int l=0,r=1;
        int res;
        int maxN=0;
        while(r<price.size()){
            if(price[l]<price[r]){
                maxN=max(maxN,price[r]-price[l]);
                r++;
            }
            else{
                l=r;
                r++;
            }

        }
        return maxN;

    }
};
