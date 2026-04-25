class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int lo=0,hi=rows*cols-1;
        int mid;
        while(lo<=hi){
            mid=(hi+lo)/2;
            int temp_row=mid/cols;
            int temp_col=mid%(cols);
            cout<<temp_row<<" "<<temp_col<<'\n';
            if(matrix[temp_row][temp_col]>target){
                hi=mid-1;
            }
            else if(matrix[temp_row][temp_col]<target){
                lo=mid+1;
            }
            else return true;
        }
        return false;
    }
};
