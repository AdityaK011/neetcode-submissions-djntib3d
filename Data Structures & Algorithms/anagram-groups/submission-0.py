class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        nums = []
        for x in range(len(strs)):
            nums.append([0]*26)
        dict = {}
        for i in range(len(strs)):
            for j in range(len(strs[i])):
                nums[i][ord(strs[i][j])-ord('a')]+=1
        answer=[]
        group=0
        for i in range(len(strs)):
            if tuple(nums[i]) in dict:
                answer[dict[tuple(nums[i])]].append(strs[i])
            else:
                dict[tuple(nums[i])]=group
                answer.append([])
                answer[group].append(strs[i])
                group+=1
        return answer