class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> temp;
        for (int k=0;k<n;k++){
            int i,j;
            if(k==0) i=1;
            else i=0;
            if(k==n-1) j=n-2;
            else j=n-1;
            while (i<j){
                if(i==k) {i++; continue;}
                if(j==k) {j--; continue;}
                if(nums[i]+nums[j]<-nums[k]){
                    i++;
                }
                else if (nums[i]+nums[j]>-nums[k]){
                    j--;
                }
                else{
                    vector<int> temp1={nums[i],nums[j],nums[k]};
                    sort(temp1.begin(),temp1.end());
                    temp.insert(temp1);
                    i++;
                }
            }
        }
        ans.assign(temp.begin(),temp.end());
        return ans;
    }
};
