class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix,suffix=[0]*len(nums),[0] *len(nums)
        n=len(nums)
        prefix[0]=1
        suffix[n-1]=1
        for i in range(1,n,1):
            prefix[i]=prefix[i-1]*nums[i-1]
        for i in range(n-2,-1,-1):
            suffix[i]=suffix[i+1]*nums[i+1]
        ans=[0]*len(nums)
        for i in range(n):
            ans[i]=prefix[i]*suffix[i]
        return ans
		