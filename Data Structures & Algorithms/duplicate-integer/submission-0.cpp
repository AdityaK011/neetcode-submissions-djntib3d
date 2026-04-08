class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for (int i=0; i< nums.size(); i++)
        {
            if (a.contains(nums[i])){
                a[nums[i]]=a[nums[i]]+1;
            }
            else{
                a[nums[i]]=1;
            }
            if(a[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};