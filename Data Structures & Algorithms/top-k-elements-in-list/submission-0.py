class Solution:
    def sort_by_freq(self, items: tuple):
        return -items[1]
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dict=defaultdict(int)
        for i in range(len(nums)):
            dict[nums[i]]+=1;
        arr=sorted(dict.items(), key=self.sort_by_freq)
        ans=[]
        for i in range(k):
            ans.append(arr[i][0])
        return ans
