// My logic not efficient ik but just the first thing i can remind 

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> merged = items1;

        for (auto item : items2) {
            merged.push_back(item);
        }

        // Sort by value
        sort(merged.begin(), merged.end());

        // Result
        vector<vector<int>> result;

        int i = 0;

        while (i < merged.size()) {
            int value = merged[i][0];
            int weight = merged[i][1];

            // Check next item
            if (i + 1 < merged.size() && merged[i + 1][0] == value) {
                weight += merged[i + 1][1];
                i++;
            }

            result.push_back({value, weight});

            i++;
        }

        return result;
    }
};









// The simple logic given by the GPT 

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
        vector<vector<int>> result;
        map<int, int> mp;
        for (auto item : items1)
            mp[item[0]] += item[1];

        for (auto item : items2)
            mp[item[0]] += item[1];

        for (auto x : mp)
            result.push_back({x.first, x.second});
        return result;
    }
};