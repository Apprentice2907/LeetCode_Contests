class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long n=-1e18;

        long long nod=n;
        long long nev=n;
        long long dod=n;
        long long dev=n;
        long long ans=n;

        for(long long x:nums){
            long long a=nev;
            long long b=nod;
            long long c=dev;
            long long d=dod;

            nev = max(x,b+ x);
            nod = a-x;

            dev = max(d + x, a);
            dod = max(c - x, b);
            ans = max({ans, nev, nod, dev, dod});

        }
        return ans;
    }
};©leetcode