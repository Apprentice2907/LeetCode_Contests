class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        int temp=0;
        for(char ch:s){
            int nxt= ch-'0';
            int dif=abs(temp-nxt);
            ans=ans+min(dif,10-dif);
            temp=nxt;
        }
        return ans;
    }
};