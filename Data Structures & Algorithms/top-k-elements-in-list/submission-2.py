from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        bucket = [[] for _ in range(len(nums)+1)]
        count=Counter(nums)
        for key, freq in count.items():
            bucket[freq].append(key)
        length=len(bucket)-1
        ans=[]
        for i in range(length,0,-1):
            for num in (bucket[i]):
                ans.append(num)
                if len(ans) == k:
                    return ans
                
            
