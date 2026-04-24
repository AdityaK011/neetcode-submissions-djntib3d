class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0,hi=n-1,mid;
        while(lo<=hi){
            if(hi==lo){
                return nums[hi]==target? hi: -1;
            }
            mid=(hi+lo)/2;
            if(nums[mid] < target){
                lo=mid+1;
            }
            else if(nums[mid] > target){
                hi=mid-1;
            }
            else return mid;
        }
        return -1;
    }
};
