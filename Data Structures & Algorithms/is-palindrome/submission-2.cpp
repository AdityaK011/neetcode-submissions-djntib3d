class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while (i<j){
            if (!(('a' <= s[i] && s[i] <= 'z') || 
                ('A' <= s[i] && s[i] <= 'Z') || 
                ('0' <= s[i] && s[i] <= '9'))) {
                i++;
            }
            else if (!(('a' <= s[j] && s[j] <= 'z') || 
                ('A' <= s[j] && s[j] <= 'Z') || 
                ('0' <= s[j] && s[j] <= '9'))) {
                j--;
            }
            else{
                if(tolower(s[i])==tolower(s[j])){
                    i++,j--;
                }
                else{
                    return false;
                }
            }
        }
        return true;


    }
};
