class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size(),ro=0,co=m-1;
        while(co>=0 && ro<n){
            if(matrix[ro][co]==target)return true;
            if(matrix[ro][co]<target)ro++;
            else co--;
        }
        return false;
    }
};