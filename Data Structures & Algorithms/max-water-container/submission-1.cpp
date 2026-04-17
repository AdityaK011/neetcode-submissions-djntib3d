class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<j){
            if(heights[i]<heights[j]){
                ans=max(ans,heights[i]*(j-i));
                i++;
            }
            else if(heights[i]>heights[j]){
                ans=max(ans,heights[j]*(j-i));
                j--;
            }
            else{
                ans=max(ans,heights[i]*(j-i));
                i++;
            }
        }
        return ans;
    }
};
