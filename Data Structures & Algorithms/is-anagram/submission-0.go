func isAnagram(s string, t string) bool {
	nums1:= map[byte]int{}
	nums2:=map[byte]int{}

	i:=len(s)-1
	j:=len(t)-1
	for i>=0 {
		nums1[s[i]]+=1
		i--
	}
	for j>=0{
		nums2[t[j]]+=1
		j--
	}
	for key, val:= range nums1 {
		if val!=nums2[key] {
			return false
		}
	}
	for key, val:= range nums2 {
		if val!=nums1[key]{
			return false
		}
	}
	return true
}
