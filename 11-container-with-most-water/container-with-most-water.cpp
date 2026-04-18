class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int i = 0, j = height.size()-1;
        while(i<j){
            int neo = min(height[i], height[j]);
            int neoarea = neo*(j-i);
            if(neoarea>area){
                area=neoarea;
            }
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return area;
    }
};