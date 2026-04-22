class Solution {
public:
    int lengthOfLongestSubstring(string& s) {
        int n=s.size();
        unordered_set<char> ss;
        int ans=0,l=0,r=0;
        while(l<=r and r<n){
            if(ss.find(s[r])==ss.end()){
                ss.insert(s[r]);
                ans=max(ans,r-l+1);
                r++;
            }
            else{
                while(ss.find(s[r])!=ss.end()){
                    ss.erase(s[l]);
                    l++;
                }
                ss.insert(s[r]);
                ans=max(ans,r-l+1);
                r++;
            }
        }
        return ans;
    }
};
