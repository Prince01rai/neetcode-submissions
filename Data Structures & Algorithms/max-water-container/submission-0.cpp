class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int n=heights.size();
        int r=n-1;
        int value = 0;
        while(l<r){
            int h=min(heights[l],heights[r]);
            int amount = (r-l)*h;
            value = max(amount, value);
            if(h==heights[l]){
                l++;
            }
            else r--;
        }
        return value;
        
    }
};
