class Solution {
public:
    bool isValid(string& s) {
        stack<char> m;
        for(auto& ch: s){
            if(ch=='(' || ch=='{' || ch=='['){
                m.push(ch);
            }
            else{
                if(ch=='}' and m.size()!=0 and m.top()=='{') m.pop();
                else if (ch==')' and m.size()!=0 and m.top()=='(') m.pop();
                else if (ch==']' and m.size()!=0 and m.top()=='[') m.pop();
                else return false;
            }
        }
        if (m.size()!=0) return false;
        return true;
    }
};
