// My logic

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());

        vector<int> prefix(nums.size());
        prefix[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        vector<int> ans;

        for (int q : queries) {
            int count = upper_bound(prefix.begin(), prefix.end(), q) - prefix.begin();
            ans.push_back(count);
        }

        return ans;
    }
};






// SImple logic and code given by GPT 

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for (int q : queries) {
            int sum = 0;
            int count = 0;

            for (int x : nums) {
                if (sum + x <= q) {
                    sum += x;
                    count++;
                } else {
                    break;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};