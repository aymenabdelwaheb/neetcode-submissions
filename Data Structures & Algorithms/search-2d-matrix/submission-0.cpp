class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int n=matrix[0].size();
          while(i<matrix.size() && matrix[i][n-1]<target){ 
            i++;   
             }
             if (i == matrix.size())      return false;
             
             int l=0;
             n--;
             while(l<=n){
                int mid=(l+n)/2;
                if(matrix[i][mid]==target) return true;
                else if(matrix[i][mid]>target) {
                    n=mid-1;

                }
                else{ l=mid+1;}
             }
             return false;
    }
};
