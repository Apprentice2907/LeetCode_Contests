// Simple set logic

class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> st;
        for(char ch:s){
            if(st.find(ch)!=st.end()) return ch;
            st.insert(ch);
        }
        return '\0';
    }
};