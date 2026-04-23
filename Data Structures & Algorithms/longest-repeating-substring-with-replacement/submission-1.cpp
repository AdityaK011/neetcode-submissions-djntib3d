class Solution {
public:
    int characterReplacement(string& s, int k) {
        int n=s.size();
        if(n==0) return 0;
        unordered_map<char,int> m;
        int i=0,j=1,ans=1;
        m[s[i]]=1;
        while(i<=j and j<n){
            if(m.find(s[j])==m.end()){
                m[s[j]]=1;
                int temp=0;
                for(const auto& entry: m){
                    temp=max(temp,entry.second);
                }
                if(j-i+1-temp<=k){
                    ans=max(ans,j-i+1);
                    j++;
                }
                else{
                    m[s[i]]--;
                    i++;
                    j++;
                }
            }
            else{
                m[s[j]]++;
                int temp=0;
                for(const auto& entry: m){
                    temp=max(temp,entry.second);
                }
                if(j-i+1-temp<=k){
                    ans=max(ans,j-i+1);
                    j++;
                }
                else{
                    m[s[i]]--;
                    i++;
                    j++;
                }
            }
        }
        return ans;
    }
};
