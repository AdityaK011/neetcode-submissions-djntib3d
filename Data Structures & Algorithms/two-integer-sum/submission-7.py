class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i,j=0,len(nums)-1
        store = {}
        for x in range(len(nums)):
            key = target-nums[x]
            if key in store:
               return [store[key],x]
            else:
                store[nums[x]]=x
		
