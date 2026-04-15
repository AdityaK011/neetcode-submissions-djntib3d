class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numset=set(nums)
        ans=0
        for x in numset:
            if (x-1) not in numset:
                length=0
                while (x+length) in numset:
                    length+=1
                ans=max(length,ans)
        return ans