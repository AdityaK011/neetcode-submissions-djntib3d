class Solution {
public:
    bool checkInclusion(string& s1, string& s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int> m;
        for (auto& i: s1){
            if(m.find(i)==m.end()) m[i]=1;
            else m[i]++;
        }
        int i=0,j=0,n=s2.size();
        bool ans=false;
        while(i<=j and j<n){
            if(m.find(s2[j])==m.end()){
                for(int temp=i;temp<j;temp++){
                    m[s2[temp]]++;
                }
                i=++j;
            }
            else{
                if(m[s2[j]]!=0){
                    m[s2[j]]--;
                    bool temp_ans=true;
                    for(auto& i: m){
                        if(i.second!=0){
                            temp_ans=false;
                            break;
                        }
                    }
                    if(temp_ans){return ans=true;}
                    j++;
                }
                else{
                    m[s2[i]]++;
                    i++;
                }
            }
        }
        return ans;
    }
};
