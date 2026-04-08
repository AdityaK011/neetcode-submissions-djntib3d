class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        nums = [0] * 26
        for i in s:
            nums[ord(i) - ord("a")] += 1
        for j in t:
            nums[ord(j) - ord("a")] -= 1
        for i in nums:
            if i != 0:
                return False
		
        return True
        