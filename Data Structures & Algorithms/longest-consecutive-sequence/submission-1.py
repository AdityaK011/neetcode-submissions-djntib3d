class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        dict = defaultdict(int)
        ans=0
        nums=sorted(nums)
        for i in nums:
            if i-1 in dict:
                dict[i]=dict[i-1]+1
                ans = max(ans,dict[i])
            else:
                dict[i]=1
                ans=max(ans,dict[i])
        return ans